 /**
 * @file BTree.cpp
 * Implementation of BTree class.
 */

#include "ReadCSV.h"
#include "BTree.h"

using namespace std;

BTree::BTreeNode::BTreeNode() {}

BTree::BTreeNode::BTreeNode(int id, int views, string language, std::set<int> mutuals) {
    streamer_iden_ = id;
    viewcount_ = views;
    languages_ = language;
    mutual_followers = mutuals;
}

int BTree::BTreeNode::getId() { return streamer_iden_; } 

int BTree::BTreeNode::getStreamerViews() { return viewcount_; } 

string BTree::BTreeNode::getLanguage() { return languages_; }

void BTree::BTreeNode::setStreamerData(int id, int views, string language, set<int> mutuals) {
    streamer_iden_ = id;
    viewcount_ = views;
    languages_ = language;
    mutual_followers = mutuals;
}

BTree::BTree(ReadCSV csvfile) {
    //for every line of the csv file, make a node
    BTree::BTreeNode temporaryNode;
    vector<BTreeNode> btree(csvfile.getSize(), temporaryNode);
    b_tree = btree;
    map_ = csvfile.getMutuals();
    featureVector_ = csvfile.getFeatureVector();
    for(auto i = 0; i < csvfile.getSize(); i++){
        b_tree[i].setStreamerData(i, featureVector_[i].first, featureVector_[i].second, map_[i]);
    }
}

BTree::BTree(vector<BTreeNode> streamers) { b_tree = streamers; }

vector<BTree::BTreeNode> BTree::getBTree() { return b_tree; }

void BTree::MergeSort(std::vector<BTreeNode>& vec, int start, int end) {
    if (start < end)
    {
        int middle = (start+end) / 2;
        MergeSort(vec, start, middle);
        MergeSort(vec, middle + 1, end);
        MergeVectors(vec, start, middle, end);
    }
}

void BTree::MergeVectors(vector<BTreeNode>& vec, int start, int middle, int end)
{
    std::vector<BTreeNode> hold;

    int i, j;
    i = start;
    j = middle + 1;

    while (i <= middle && j <= end)
    {
        if (vec[i].getStreamerViews() >= vec[j].getStreamerViews())
        {
            hold.push_back(vec[i]);
            i++;
        }
        else
        {
            hold.push_back(vec[j]);
            j++;
        }
    }

    while (i <= middle)
    {
        hold.push_back(vec[i]);
        i++;
    }

    while (j <= end)
    {
        hold.push_back(vec[j]);
        j++;
    }

    for(int i = start; i <= end; i++)
    {
        vec[i] = hold[i-start];
    }
}
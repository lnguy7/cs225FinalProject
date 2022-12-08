 /**
 * @file BTree.cpp
 * Implementation of BTree class.
 */

#include "ReadCSV.h"
#include "BTree.h"

BTree::BTreeNode::BTreeNode() {}

BTree::BTreeNode::BTreeNode(int s_id, ReadCSV csvfile) {
    vector<string> to_pull = csvfile.getFeatureVector(s_id);
    streamer_iden_ = stoi(to_pull[0]);
    viewcount_ = stoi(to_pull[1]);
    languages_ = to_pull[2];
    mutual_followers = csvfile.getMutualMap().at(streamer_iden_);
}

int BTree::BTreeNode::getId() { return streamer_iden_; } 

int BTree::BTreeNode::getStreamerViews() { return viewcount_; } 

string BTree::BTreeNode::getLanguage() { return languages_; }

void BTree::BTreeNode::setStreamerData(int id, int views, std::string language) {
    streamer_iden_ = id;
    viewcount_ = views;
    languages_ = language;
}

BTree::BTree(ReadCSV csvfile) {
    //for every line of the csv file, make a node
    csvfiles = csvfile;
    for (int i = 0; i < csvfiles.getSize(); i++) {
        BTree::BTreeNode temp(i, csvfiles);
        b_tree.push_back(temp);
    }
}

BTree::BTree(vector<BTreeNode> streamers) { b_tree = streamers; }

vector<BTree::BTreeNode> BTree::getBTree() { return b_tree; }

void BTree::MergeSort(std::vector<BTreeNode>& vec, int start, int end)
{
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
        if (vec[i].getStreamerViews() <= vec[j].getStreamerViews())
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
        vec[i] = hold[i - start];
    }
}
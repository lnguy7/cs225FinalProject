 /**
 * @file BTree.cpp
 * Implementation of BTree class.
 */

#include "ReadCSV.h"
#include "BTree.h"

BTree::BTreeNode::BTreeNode() {}

BTree::BTreeNode::BTreeNode(int s_id) {
    vector<string> to_pull = getFeatureVector(s_id);

    streamer_iden_ = stoi(to_pull[0]);
    viewcount_ = stoi(to_pull[1]);
    languages_ = to_pull[2];
}

string BTree::BTreeNode::getId() { return streamer_iden_; }

string BTree::BTreeNode::getStreamerViews() { return viewcount_; }

string BTree::BTreeNode::getLanguage() { return languages_; }

void BTree::BTreeNode::setStreamerData(int id, int views, std::string language) {
    streamer_iden_ = id;
    viewcount_ = views;
    languages_ = language;
}

BTree::BTree() {}

BTree::BTree(vector<BTreeNode> streamers) { b_tree = streamers; }

vector<BTree::BTreeNode> BTree::getBTree() { return b_tree; }


 /**
 * @file BTree.cpp
 * Implementation of BTree class.
 */

#include "BTree.h"

BTree::BTreeNode::BTreeNode() {}

string BTree::BTreeNode::getId() { return streamer_data.first; }

//Inside the streamer data vector, the order of the data is as follows:
//views = index 0
//mature = index 1
//life_time = index 2
//created_at = index 3
//updated_at = index 4
//dead_account = index 5
//language = index 6
//affiliate = index 7
string BTree::BTreeNode::getStreamerViews() { return streamer_data.second.at(0); }

string BTree::BTreeNode::getStreamerMatureViewings() { return streamer_data.second.at(1); }

string BTree::BTreeNode::getLifeTime() { return streamer_data.second.at(2); }

string BTree::BTreeNode::getAccountCreatedAt() { return streamer_data.second.at(3); }

string BTree::BTreeNode::getAccountUpdatedAt() { return streamer_data.second.at(4); }

string BTree::BTreeNode::getDeadAccount() { return streamer_data.second.at(5); }

string BTree::BTreeNode::getLanguage() { return streamer_data.second.at(6); }

string BTree::BTreeNode::getAffiliate() { return streamer_data.second.at(7); }

void BTree::BTreeNode::setStreamerData(string id, vector<string> streamer_feature_data) {
    streamer_data.first = id;
    streamer_data.second = streamer_feature_data;
}

void BTree::BTreeNode::setMutualFollowers(vector<BTreeNode*> mutual_follows) {
    mutual_followers = mutual_follows;
}
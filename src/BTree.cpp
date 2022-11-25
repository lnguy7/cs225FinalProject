 /**
 * @file BTree.cpp
 * Implementation of BTree class.
 */

#include "BTree.h"

BTree::BTreeNode::BTreeNode() {}

BTree::BTreeNode::BTreeNode(vector<string> streamer_id_and_feature_data) {
    vector<string> feature_data;

    //numeric id is item #6 on each line in the dataset, so it's at index 5 when converted into vector form.
    int index = 0;
    while (index < 5) {
        feature_data.push_back(streamer_id_and_feature_data.at(index));
        index++;
    }

    feature_data.push_back(streamer_id_and_feature_data.at(6));
    feature_data.push_back(streamer_id_and_feature_data.at(7));
    feature_data.push_back(streamer_id_and_feature_data.at(8));  

    streamer_data = pair<string, vector<string>>(streamer_id_and_feature_data.at(5), feature_data);
}

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


BTree::BTree() {}

BTree::BTree(vector<BTreeNode> streamers) { b_tree = streamers; }

vector<BTree::BTreeNode> BTree::getBTree() { return b_tree; }


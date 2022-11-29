#include <catch2/catch_test_macros.hpp>
#include "BTree.h"
#include "Data.h"
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

BTree::BTreeNode constructBTreeNode() {
    string streamer_id = "0";
    vector<std::string> streamer_data;
    int index = 0;
    while (index < 8) {
        streamer_data.push_back(to_string(index));
        index++;
    }
    BTree::BTreeNode b_tree_node;
    b_tree_node.setStreamerData(streamer_id, streamer_data);
    return b_tree_node;
}

TEST_CASE("Testing if Test Cases work", "[weight=1][part=1]") {
  REQUIRE(0==0);
}

TEST_CASE(""){

}
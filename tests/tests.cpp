#include "BTree.h"
using namespace std;

BTreeNode constructBTreeNode() {
    string streamer_id = "0";
    vector<string> streamer_data;
    int index = 0;
    while (index < 8) {
        streamer_data.push_back(index);
        index++;
    }
    BTreeNode b_tree_node;
    b_tree_node.setStreamerData(id, streamer_data);
    return b_tree_node;
}

TEST_CASE("BTree and BTreeNode construction", "[weight=2][part=1]") {
  vector<BTreeNode> nodes;
  temp.push_back(constructBTreeNode());
  BTree testing_b_tree = new BTree(temp);

  REQUIRE(b_tree.getBTree().at(0).getLanguage() == 6);
}
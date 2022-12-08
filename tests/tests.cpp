#include <catch2/catch_test_macros.hpp>
#include "BTree.h"
#include "Data.h"
#include "ReadCSV.h"
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

ReadCSV CSV;

TEST_CASE("Testing if Test Cases work", "[weight=1][part=1]") {
  REQUIRE(0==0);
}

TEST_CASE("Test Reads CSV", "[weight=2][part=1]") {
  std::vector<std::string> test = {"0", "7879", "EN"};
  std::vector<std::string> test2 = {"446", "7252", "EN"};
  std::vector<std::string> read_file = CSV.getFeatureVector(0);
  std::vector<std::string> read_file2 = CSV.getFeatureVector(446);

  REQUIRE(test == read_file);
  REQUIRE(test2 == read_file2);
}

TEST_CASE("BTreeNodes build corretly", "[weight=2][part=1]") {
  BTree::BTreeNode testNode(2, CSV);

  REQUIRE(testNode.getLanguage() == "EN");
  REQUIRE(testNode.getStreamerViews() == 382502);
}

TEST_CASE("Testing the Btree setter", "[weight=4][part=1]") {
  ReadCSV csv = ReadCSV();
  std::vector<std::string> read_file = CSV.getFeatureVector(108);

  BTree::BTreeNode node = BTree::BTreeNode();
  node.setStreamerData(std::stoi(read_file.at(0)), std::stoi(read_file.at(1)), read_file.at(2));

  REQUIRE(node.getId() == 108);
  REQUIRE(node.getLanguage() == "TR");
  REQUIRE(node.getStreamerViews() == 1946);
}

TEST_CASE("Testing MergeSort sorting", "[weight=2][part=1]") {
  ReadCSV csv("../lib/test_features.csv", "../lib/test_edges.csv");
  BTree testTree = BTree(csv);
  testTree.MergeSort(testTree.getBTree(), 0, int(testTree.getBTree().size()-1));

  for (int i = 0; i < 8; i++)
  {
    REQUIRE(testTree.getBTree()[i].getStreamerViews() < testTree.getBTree()[i+1].getStreamerViews());
  }
}
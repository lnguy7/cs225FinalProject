#include <catch2/catch_test_macros.hpp>
#include "BTree.h"
#include "Data.h"
#include "ReadCSV.h"
#include "Graph.h"
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

ReadCSV CSV; //Our dataset in a CSV class
ReadCSV CSVtest("../lib/test_features.csv", "../lib/test_edges.csv"); //test data we made

TEST_CASE("Testing if Test Cases work", "[weight=1][part=1]") {
  //CSV.printFeature();
  REQUIRE(0==0);
}

// TEST_CASE("Test Reads CSV", "[weight=2][part=1]") {
//   std::vector<std::string> test = {"0", "7879", "EN"};
//   std::vector<std::string> test2 = {"446", "7252", "EN"};
//   std::vector<std::string> read_file = CSV.getFeatureVector(0);
//   std::vector<std::string> read_file2 = CSV.getFeatureVector(446);

//   REQUIRE(test == read_file);
//   REQUIRE(test2 == read_file2);
// }

// TEST_CASE("BTreeNodes build corretly", "[weight=2][part=1]") {
//   BTree::BTreeNode testNode(2, CSV);

//   REQUIRE(testNode.getLanguage() == "EN");
//   REQUIRE(testNode.getStreamerViews() == 382502);
// }

// TEST_CASE("Testing the Btree setter", "[weight=4][part=1]") {
//   std::vector<std::string> read_file = CSV.getFeatureVector(108);

//   BTree::BTreeNode node = BTree::BTreeNode();
//   node.setStreamerData(std::stoi(read_file.at(0)), std::stoi(read_file.at(1)), read_file.at(2));

//   REQUIRE(node.getId() == 108);
//   REQUIRE(node.getLanguage() == "TR");
//   REQUIRE(node.getStreamerViews() == 1946);
// }

// Graph graphTest(CSVtest);

// TEST_CASE("Testing if graph constructs with IDs in order", "[weight=2][part=1]"){
//   for(size_t i = 0; i < graphTest.getGraph().size(); i++){
//     REQUIRE(graphTest.getGraph()[i].getId() == int(i));
//   }
// }

// TEST_CASE("Check if each node had the correct language and avg viewers", "[weight=6][part=1]"){
//   REQUIRE(graphTest.getGraph()[0].getLanguage() == "EN");
//   REQUIRE(graphTest.getGraph()[1].getLanguage() == "EN");
//   REQUIRE(graphTest.getGraph()[2].getLanguage() == "EN");
//   REQUIRE(graphTest.getGraph()[3].getLanguage() == "EN");
//   REQUIRE(graphTest.getGraph()[4].getLanguage() == "FR");
//   REQUIRE(graphTest.getGraph()[5].getLanguage() == "JP");
//   REQUIRE(graphTest.getGraph()[6].getViews() == 234);
//   REQUIRE(graphTest.getGraph()[7].getViews() == 775);
//   REQUIRE(graphTest.getGraph()[8].getViews() == 69420);
//   REQUIRE(graphTest.getGraph()[14].getViews() == 123420);

// }
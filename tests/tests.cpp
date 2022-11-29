#include <catch2/catch_test_macros.hpp>
#include "BTree.h"
#include "Data.h"
#include "ReadCSV.h"
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;


TEST_CASE("Testing if Test Cases work", "[weight=1][part=1]") {
  REQUIRE(0==0);
}

TEST_CASE("Test Reads CSV", "[weight=2][part=1]") {
  ReadCSV CSV("../lib/large_twitch_features.csv", "../lib/large_twitch_edges.csv");
  std::vector<std::string> test = {"0", "7879", "EN"};
  std::vector<std::string> test2 = {"446", "7252", "EN"};
  std::vector<std::string> read_file = CSV.getFeatureVector(0);
  std::vector<std::string> read_file2 = CSV.getFeatureVector(446);

  REQUIRE(test == read_file);
  REQUIRE(test2 == read_file2);
}



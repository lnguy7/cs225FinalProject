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

TEST_CASE("Test if node has right amount of mutuals", "[weight=3][part=1]") {
  
  REQUIRE(CSV.getMutuals(162967).size() == 502);
  REQUIRE(CSV.getMutuals(6369).size() == 266);
}
/**
 * @file Data.h
 * This Data class will be responsible for the sifting through and organization of data into the 
 * B-tree class. It will also contain functions that will analyze the data within the B-tree structure.
 *
 * @author Bella Cruz
 */

#pragma once
#include "BTree.h"
#include <utility>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <vector>
#include <cassert>
#include <fstream>

using namespace std;

class Data {
    public:
      Data();

      BTree get_data_b_tree();

      vector<vector<string>> file_to_nested_vector(const std::string& filename);

      void create_B_tree(vector<vector<string>> data_in_vector_structure);


    private:
      string data_to_string(const string& filename);
      string trim_right_side(const string& string);
      string trim_left_side(const string& string);
      string trim_all(const string& string);
      int split_string(const string& string_one, char sep, vector<string>& fields);

      BTree data_b_tree;
};
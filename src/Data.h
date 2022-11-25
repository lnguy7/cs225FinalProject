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
      BTree get_data_b_tree();



    private:
      string data_to_string(const string& filename);
      string trim_right_side(const string& string);
      string trim_left_side(const string& string);
      string trim_all(const string& string);
      BTree data_b_tree;
};
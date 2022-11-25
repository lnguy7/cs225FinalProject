/**
 * @file Data.h
 * This Data class will be responsible for the sifting through and organization of data into the 
 * B-tree class. It will also contain functions that will analyze the data within the B-tree structure.
 *
 * @author Bella Cruz
 */

#pragma once
#include "BTree.h"

using namespace std;

class Data {
    public:
      BTree get_data_b_tree();



    private:
      BTree data_b_tree;
};
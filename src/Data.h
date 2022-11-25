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
      /*
      * The default constructor for the Data class.
      */
      Data();

      /**
      * Returns the b-tree structure that the data is organized in.
      * 
      * @return data_b_tree.
      */
      BTree get_data_b_tree();

      /**
      * Given a filename to a CSV-formatted text file, create a 2D vector of strings where each row
      * in the text file is a row in the V2D and each comma-separated value is stripped of whitespace
      * and stored as its own string.
      *  
      * @param filename The filename of a CSV-formatted text file. 
      * @return The vector of vectors of strings imported from filename
      */
      vector<vector<string>> file_to_nested_vector(const std::string& filename);

      /**
      * Loops through each row of the nested vector and creates a BTreeNode for each row (each row represents a streamer).
      * The BTree of the dataset is then constructed from the vector of nodes created.
      * 
      * @param data_in_vector_structure the nested vector of strings that holds the data from the file, "large_twitch_features.csv".
      */
      void create_B_tree(vector<vector<string>> data_in_vector_structure);


    private:
      /**
      * Takes a filename and reads in all the text from the file
      * 
      * @param filename The name of the file that will fill the string
      * @return A string containing the whole text of the given file
      */
      string data_to_string(const string& filename);

      /**
      * Given a string and character, split the string by the character and store in a vector
      * A 'split' string treats the character as a breakpoint and creates a separate item
      * in the output vector for each substring. 
      *  
      * @param string_one The string being split
      * @param sep The separator character
      * @param fields The string vector storing all substrings created by the split
      * @return The number of substrings created
      */
      int split_string(const string& string_one, char sep, vector<string>& fields);

      /**
      * Functions for the removal of whitespace to the left or right of a string (or both)
      *
      * @param string The string being processed
      * @return The processed string
      */
      string trim_right_side(const string& string);
      string trim_left_side(const string& string);
      string trim_all(const string& string);
      
      /** Private member variable that holds the graphical representation of the data. */
      BTree data_b_tree;
};
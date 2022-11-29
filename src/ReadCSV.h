 /**
 * @file ReadCSV.h
 * Integrates reading the CSV to adding it to the BTree
 *
 * @author Lucas Nguyen
 */

#pragma once

#include <string>
#include <vector>
#include <iostream>
#include <utility>

using namespace std;

class ReadCSV{
    public:
        ReadCSV();
        ReadCSV(const string & featureFile, const string & edgesFile);
        vector<string> getFeatureVector(int id);
        vector<int> getMutuals(int id);
        vector<pair<string,string>> fileToVecPair(const string & filename);
        int size;
    private:
        string featureFile_;
        string edgesFile_;
        vector<vector<string>> featureVector_;
        vector<pair<string,string>> edgesVector_;
};
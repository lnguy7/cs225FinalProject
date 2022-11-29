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

using namespace std;

class ReadCSV{
    public:
        ReadCSV();
        ReadCSV(const string & featureFile, const string & edgesFile);
        vector<string> getFeatureVector(int id);
        vector<int> getMutuals(int id);
        int size;
    private:
        string featureFile_;
        string edgesFile_;
        vector<vector<string>> featureVector_;
        vector<vector<string>> edgesVector_;
};
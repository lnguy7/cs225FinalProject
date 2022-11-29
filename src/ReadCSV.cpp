 /**
 * @file ReadCSV.cpp
 * Integrates reading the CSV to adding it to the BTree
 *
 * @author Lucas Nguyen
 */
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
#include "ReadCSV.h"
#include "Data.h"

using namespace std;
ReadCSV::ReadCSV(){
    Data CSVFile;
    featureFile_ = "../lib/large_twitch_features.csv";
    edgesFile_ =    "../lib/large_twitch_edges.csv";
    featureVector_ = CSVFile.file_to_nested_vector(featureFile_);
    edgesVector_ = CSVFile.file_to_nested_vector(featureFile_);
    size = featureVector_.size();
}

ReadCSV::ReadCSV(const string & featureFile, const string & edgesFile){
    Data CSVFile;
    featureFile_ = featureFile;
    edgesFile_ = edgesFile;
    featureVector_ = CSVFile.file_to_nested_vector(featureFile_);
    edgesVector_ = CSVFile.file_to_nested_vector(featureFile_);
    size = featureVector_.size();
}

vector<string> ReadCSV::getFeatureVector(int id){
    return {featureVector_[id+1][5],featureVector_[id+1][0],featureVector_[id+1][7]};
}

vector<int> ReadCSV::getMutuals(int id){
    vector<int> mutuals;

    for(vector<string> mId: edgesVector_){
        string str0 = mId[0];
        string str1 = mId[1];
        stringstream stream0(str0);
        int num0 = 0;
        stream0 >> num0;
        stringstream stream1(str1);
        int num1 = 0;
        stream1 >> num1;
        if(num0 == id){
            mutuals.push_back(num1);
        }else if(num1 == id){
            mutuals.push_back(num0);
        }
    }
    return mutuals;
}
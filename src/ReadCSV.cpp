 /**
 * @file ReadCSV.cpp
 * File converts reads CSV files as needed
 *
 * @author Lucas Nguyen
 */
#include <string>
#include <vector>
#include <iostream>
#include "ReadCSV.h"
#include "Data.h"

using namespace std;
ReadCSV::ReadCSV(){
    Data CSVFile;
    featureFile_ = "../lib/large_twitch_features.csv";
    edgesFile_ =    "../lib/large_twitch_edges.csv";
    nestedVector_ = CSVFile.file_to_nested_vector(featureFile_);
}

ReadCSV::ReadCSV(const string & featureFile, const string & edgesFile){
    Data CSVFile;
    featureFile_ = featureFile;
    edgesFile_ = edgesFile;
    nestedVector_ = CSVFile.file_to_nested_vector(featureFile_);
}

vector<string> ReadCSV::getFeatureVector(int id){
    return {nestedVector_[id+1][5],nestedVector_[id+1][0],nestedVector_[id+1][7]};
}
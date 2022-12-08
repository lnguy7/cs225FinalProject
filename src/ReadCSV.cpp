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
    edgesVector_ = fileToVecPair(edgesFile_);
    size_ = featureVector_.size();
    mutualmap_ = getMutuals();
}

ReadCSV::ReadCSV(const string & featureFile, const string & edgesFile){
    Data CSVFile;
    featureFile_ = featureFile;
    edgesFile_ = edgesFile;
    featureVector_ = CSVFile.file_to_nested_vector(featureFile_);
    edgesVector_ = fileToVecPair(edgesFile_);
    size_ = featureVector_.size();
    mutualmap_ = getMutuals();
}

vector<string> ReadCSV::getFeatureVector(int id){
    return {featureVector_[id+1][5],featureVector_[id+1][0],featureVector_[id+1][7]};
}

std::map<int, std::set<int>> ReadCSV::getMutuals(){
    std::map<int, std::set<int>> to_return;
    //run through the entire mutuals file
    //look at ids, if either of them is not in the map, add them with an empty vector
    //push the ids to eachothers adjacency list
    for (size_t i = 0; i < featureVector_.size(); i++) {
        std::set<int> temp;
        to_return.insert({i, temp});
    }
    for(pair<string,string> mId: edgesVector_){
        int id1 = stoi(mId.first);
        int id2 = stoi(mId.second);
        to_return.at(id1).insert(id2);
        to_return.at(id2).insert(id1);
    }
    return to_return;
}

vector<pair<string,string>> ReadCSV::fileToVecPair(const string & filename){ //Fix bug for pairs
    vector<pair<string,string>> edges;
    pair<string,string> sPair;
    string intStr;
    FILE * fp = fopen(filename.c_str(), "r");
    while(true){
        char c = fgetc(fp);
        if(c == '\n') break;
    }
    while(true){
        char c = fgetc(fp);
        if(feof(fp)){
            sPair.second = intStr;
            edges.push_back(sPair);
            break;
        }if(c == ','){
            sPair.first = intStr;
            intStr.clear();
        }else if(c == '\n'){
            sPair.second = intStr;
            intStr.clear();
            edges.push_back(sPair);
            intStr.clear();
        }else{
            intStr =  + c;
        }
        
    }
    fclose(fp);
    return edges;
}

int ReadCSV::getSize() { return size_; }

std::map<int, std::set<int>> ReadCSV::getMutualMap() { return mutualmap_; }
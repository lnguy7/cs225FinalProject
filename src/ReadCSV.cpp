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


using namespace std;
ReadCSV::ReadCSV(){
    featureFile_ = "../lib/large_twitch.csv";
    edgesFile_ =    "../lib/large_twitch_edges.csv";
    featureVector_ = fileToVecPairWithInt(featureFile_);
    edgesVector_ = fileToVecPair(edgesFile_);
    size_ = featureVector_.size();
    mutualmap_ = getMutuals();
}

ReadCSV::ReadCSV(const string & featureFile, const string & edgesFile){
    featureFile_ = featureFile;
    edgesFile_ = edgesFile;
    featureVector_ = fileToVecPairWithInt(featureFile_);
    edgesVector_ = fileToVecPair(edgesFile_);
    size_ = featureVector_.size();
    mutualmap_ = getMutuals();
}



std::map<int, std::set<int>> ReadCSV::getMutuals(){
    std::map<int, std::set<int>> to_return;
    //run through the entire mutuals file
    //look at ids, if either of them is not in the map, add them with an empty vector
    //push the ids to eachothers adjacency list
    for (size_t i = 0; i < featureVector_.size()+1; i++) {
        std::set<int> temp;
        to_return.insert({i, temp});
    }
    for(pair<string,string> mId: edgesVector_){
        if (mId.first != "" && mId.second != "")
        {
        int id1 = stoi(mId.first);
        int id2 = stoi(mId.second);
        to_return.at(id1).insert(id2);
        to_return.at(id2).insert(id1);
        }
        
       
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
            intStr = intStr + c;
        }
        
    }
    fclose(fp);
    return edges;
}

vector<pair<int,string>> ReadCSV::fileToVecPairWithInt(const string & filename){ //Fix bug for pairs
    vector<pair<int,string>> edges;
    pair<int,string> sPair;
    string intStr;
    FILE * fp = fopen(filename.c_str(), "r");
    while(true){
        char c = fgetc(fp);
        if(feof(fp)){
            sPair.second = intStr;
            break;
        }if(c == ','){
            sPair.first = stoi(intStr);
            intStr.clear();
        }else if(c == '\n'){
            sPair.second = intStr;
            intStr.clear();
            edges.push_back(sPair);
            intStr.clear();
        }else{
            intStr = intStr + c;
        }
        
    }
    fclose(fp);
    return edges;
}

int ReadCSV::getSize() { return size_; }

int ReadCSV::getViews(int id) { return featureVector_[id].first; }

string ReadCSV::getLanguage(int id) { return featureVector_[id].second; }

vector<pair<int,string>> ReadCSV::getFeatureVector(){return featureVector_;}

vector<pair<string,string>> ReadCSV::getEdgesVector(){return edgesVector_;}

void ReadCSV::printFeature(){
    for(pair<int,string> featureVectorVector: featureVector_){
        cout << featureVectorVector.first << ", " << featureVectorVector.second << endl;
     }
}

void ReadCSV::printEdges(){
     for(pair<string,string> edgesVectorVector: edgesVector_){
        cout << edgesVectorVector.first << ", " << edgesVectorVector.second << endl;
     }
}

std::map<int, std::set<int>> ReadCSV::getMutualMap() { return mutualmap_; }
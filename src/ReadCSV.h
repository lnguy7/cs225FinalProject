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
#include <map>
#include <set>

using namespace std;

class ReadCSV{
    public:
        /*
        * The default constructor for the ReadCSV.
        */
        ReadCSV();

        /**
        * Constructs a ReadCSV with the provided data files to parse. 
        * 
        * @param featureFile the data file that stores each viewer's feature data and their id.
        * @param edgesFile the data file that store all the mutual followers for each viewer.
        */
        ReadCSV(const string & featureFile, const string & edgesFile);


        /**
        * TODO: remove this function once map of followers is created. 
        */
        std::map<int, std::set<int>> getMutuals();

        /**
        * Takes in the mutual followers edge data and converts it into a vector data structure that allows easy access to each id's
        * mutual connections. 
        * 
        * @param filename the edge data file.
        *
        * @return the parsed data file.
        */
        vector<pair<string,string>> fileToVecPair(const string & filename);
        
        vector<pair<int,string>> fileToVecPairWithInt(const string & filename);
        /**
        * gets the size of the csv file.
        *
        * @return the size of the csv file.
        */
        int getSize();

        int getViews(int id);

        string getLanguage(int id);

        vector<pair<int,string>> getFeatureVector();

        vector<pair<string,string>> getEdgesVector();

        void printFeature();

        void printEdges();

        std::map<int, std::set<int>> getMutualMap();
        
    private:
        /*
        * The size of the csv file.
        */
        int size_;
        /*
        * The data file that holds each streamer's feature data; parsed into a string.
        */
        string featureFile_;

        /*
        * The data file that holds each streamer's mutual followers; parsed into a string.
        */
        string edgesFile_;

        /*
        * The featureFile_ string parsed into a pair of int and string.
        */
        vector<pair<int,string>> featureVector_;

        /*
        * The edgesFile_ string parsed into a pair of 2 strings.
        */
        vector<pair<string,string>> edgesVector_;

        std::map<int, std::set<int>> mutualmap_;
};
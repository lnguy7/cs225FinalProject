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
        * Gets the feature data of a specific viewer.
        * 
        * @param id the id of the viewer whose data needs to be fetched.
        *
        * @return the feature data of the provided viewer.
        */
        vector<string> getFeatureVector(int id);

        /**
        * TODO: remove this function once map of followers is created. 
        */
        vector<int> getMutuals(int id);

        /**
        * Takes in the mutual followers edge data and converts it into a vector data structure that allows easy access to each id's
        * mutual connections. 
        * 
        * @param filename the edge data file.
        *
        * @return the parsed data file.
        */
        vector<pair<string,string>> fileToVecPair(const string & filename);
        
        /**
        * gets the size of the csv file.
        *
        * @return the size of the csv file.
        */
        int getSize();
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
        * The featureFile_ string parsed into a nested vector of strings.
        */
        vector<vector<string>> featureVector_;

        /*
        * The edgesFile_ string parsed into a nested vector of strings.
        */
        vector<pair<string,string>> edgesVector_;
};
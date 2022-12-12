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
        * Creates a map from the that allows access to a streamer's mutual followers by using the streamer id as the key, and their
        * followers as the values.
        * 
        * @return a map that uses a streamer id as a key to access that streamer's mutual followers.
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

        /**
        * Takes in the streamers and their feature data and converts it into a vector data structure that allows easy access to each id 
        * and the feature data for that streamer.
        * 
        * @param filename the feature data file.
        *
        * @return the parsed data file.
        */
        vector<pair<int,string>> fileToVecPairWithInt(const string & filename);

        /**
        * Gets the size of the csv file.
        *
        * @return the size of the csv file.
        */
        int getSize();

        /**
        * Gets the average views of a specific streamer.
        *
        * @param id the streamer id.
        *
        * @return the number of average views for the streamer.
        */
        int getViews(int id);

        /**
        * Gets the language of a specific streamer.
        *
        * @param id the streamer id.
        *
        * @return the language the streamer uses for streaming.
        */
        string getLanguage(int id);

        /**
        * Gets the entire parsed dataset of streamers and their individual feature data.
        *
        * @return all the streamers and their feature data.
        */
        vector<pair<int,string>> getFeatureVector();

        /**
        * Gets the entire parsed dataset of mutual followers for each streamer.
        *
        * @return all the mutual followers for each streamer.
        */
        vector<pair<string,string>> getEdgesVector();

        /**
        * Prints out the streamer's id and their corresponding feature data.
        */
        void printFeature();

        /**
        * Prints out all the edges (mutual follwerships for each streamer).
        */
        void printEdges();

        /**
        * Gets the map of mutual followers among streamers.
        *
        * @return the map of mutual followers.
        */
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

        /*
        * A map of the mutual followers for each streamer. The map optiizes program performance when accessing the different
        * connections. It was taken from the edges data vector and converted.
        */
        std::map<int, std::set<int>> mutualmap_;
};
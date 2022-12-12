/**
 * @file Graph.h
 * Holds graph node of each features with their language, viewership, and ID
 * It also holds a vector of all mutual features which is its edges
 * @author Lucas Nguyen
 */

#pragma once

#include <vector>
#include <string>
#include <iostream>
#include <utility>
#include <map>
#include "ReadCSV.h"

using namespace std;

class Graph {
    public:
        class GraphNode {
            public:

                /*
                * Default constructor.
                */
                GraphNode();

                /**
                * Based on a given ID create a GraphNode with its data
                *
                * @param id the streamer id.
                * @param views the streamer's average views.
                * @param language the streamer's native language.
                * @param mutuals a set of all the individual streamer's mutual followers.
                */
                GraphNode(int id, int views, string language, std::set<int> mutuals);

                /**
                * Returns the streamer id
                * 
                * @return numeric_id
                */
                int getId();

                /**
                * Returns the number of streamer views
                * 
                * @return views
                */
                int getViews();

                /**
                * Returns the primary language of the streamer
                * 
                * @return language
                */
                string getLanguage();

                /**
                * Gets the mutual followers for the specific streamer.
                * 
                * @return the mutual followers of a streamer.
                */
                set<int> getMutuals();

                /**
                * Returns the number of mutual followers for a specific streamer.
                * 
                * @return the number of mutual followers a streamer has.
                */
                int getMutualSize();

                /**
                * Set data of node in graph.
                *
                * @param id the streamer id.
                * @param views the streamer's average views.
                * @param language the streamer's native language.
                * @param mutuals a set of all the individual streamer's mutual followers.
                */
                void setData(int id, int views, string language, set<int> mutuals);

           private:
                /*
                * ID of node
                */
                int id_;

                /*
                * # of viewers of node
                */
                int views_;

                /*
                * Language of node
                */
                string language_;

                /*
                * Vector of mutual nodes (Neighbors of node)
                */
                set<int> mutuals_;
        };

        /**
        * Creates graph based on the ReadCSV file
        *
        * @param file that contains the parsed and organized data.
        */    
        Graph(ReadCSV file);

        /**
        * Returns a graphical represenation of all the streamers.
        * 
        * @return the vector representation of a B-Tree.
        */
        vector<GraphNode> getGraph();

        /**
        * Getter for our mutual followers map.
        * 
        * @return map of adjacency lists for our graph.
        */
        map<int, set<int>> getMap();

    private:
        /*
        * A vector of GraphNodes which represent the graph
        */
        vector<GraphNode> graph_;

        /*
        * Vector of all mutual functions
        */
        map<int, set<int>> map_;

        /*
        * The featureFile_ string parsed into a pair of int and string.
        */
        vector<pair<int,string>> featureVector_;
};
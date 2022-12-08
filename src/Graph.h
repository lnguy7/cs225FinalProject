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
                *Default GraphNode constructor
                */
                GraphNode();

                /*
                * Based on a given ID create a GraphNode with its data
                */
                GraphNode(int id, ReadCSV data);

                /**
                * Returns the streamer id.
                * 
                * @return numeric_id.
                */
                int getId();

                /**
                * Returns the number of streamer views.
                * 
                * @return views.
                */
                int getViews();

                /**
                * Returns the primary language of the streamer.
                * 
                * @return language.
                */
                string getLanguage();

                /*
                * Changes the data in node.
                */
                void setData(int id, int views, string language, vector<int> mutuals);

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
                vector<int> mutuals_;
        };

        /*
        *Default Graph constructor
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

};
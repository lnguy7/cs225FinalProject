/**
 * @file Graph.cpp
 * Holds graph node of each features with their language, viewership, and ID
 * It also holds a vector of all mutual features which is its edges
 * @author Lucas Nguyen
 */

#include "ReadCSV.h"
#include "Graph.h"

using namespace std;

Graph::GraphNode::GraphNode(int id, ReadCSV data){
    vector<string> temp = data.getFeatureVector(id);
    id_ = stoi(temp[0]);
    views_ = stoi(temp[1]);
    language_ = temp[2];
    mutuals_ = data.getMutualMap()[id];
}

int Graph::GraphNode::getId() {return id_; }

int Graph::GraphNode::getViews() {return views_; }

string Graph::GraphNode::getLanguage() {return language_; }

void Graph::GraphNode::setData(int id, int views, string language, set<int> mutuals){
    id_ = id;
    views_ = views;
    language_ = language;
    mutuals_ = mutuals;
}

Graph::Graph(ReadCSV file){
    for(auto i = 0; i < file.getSize(); i++){
        Graph::GraphNode temporaryGraphNode(i, file);
        graph_.push_back(temporaryGraphNode);
    }
    map_ = file.getMutuals();
}

vector<Graph::GraphNode> Graph::getGraph(){ return graph_;}


map<int, set<int>> Graph::getMap(){ return map_; }
/**
 * @file Graph.cpp
 * Holds graph node of each features with their language, viewership, and ID
 * It also holds a vector of all mutual features which is its edges
 * @author Lucas Nguyen
 */

#include "ReadCSV.h"
#include "Graph.h"

using namespace std;

Graph::GraphNode::GraphNode(){
    id_ = 0;
    views_ = 0;
    language_ = "";
    mutuals_ = {0};
}

Graph::GraphNode::GraphNode(int id, int views, string language, std::set<int> mutuals){
    id_ = id;
    views_ = views;
    language_ = language;
    mutuals_ = mutuals;
}

int Graph::GraphNode::getId() {return id_; }

int Graph::GraphNode::getViews() {return views_; }

string Graph::GraphNode::getLanguage() {return language_; }

set<int> Graph::GraphNode::getMutuals() {return mutuals_;}

int Graph::GraphNode::getMutualSize() {return mutuals_.size(); }

void Graph::GraphNode::setData(int id, int views, string language, set<int> mutuals){
    id_ = id;
    views_ = views;
    language_ = language;
    mutuals_ = mutuals;
}

Graph::Graph(ReadCSV file){
    Graph::GraphNode temporaryGraphNode;
    vector<GraphNode> graph(file.getSize(), temporaryGraphNode);
    graph_ = graph;
    map_ = file.getMutuals();
    featureVector_ = file.getFeatureVector();
    for(auto i = 0; i < file.getSize(); i++){
        graph_[i].setData(i, featureVector_[i].first, featureVector_[i].second, map_[i]);
    }
}

vector<Graph::GraphNode> Graph::getGraph(){ return graph_;}


map<int, set<int>> Graph::getMap(){ return map_; }
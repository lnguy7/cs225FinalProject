/**
 * @file Graph.cpp
 * Holds graph node of each features with their language, viewership, and ID
 * It also holds a vector of all mutual features which is its edges
 * @author Lucas Nguyen
 */

#include "ReadCSV.h"
#include "Graph.h"

using namespace std;

Graph::GraphNode::GraphNode(int id, int views, string language, std::set<int> mutuals){
    id_ = id;
    views_ = views;
    language_ = language;
    mutuals_ = mutuals;
}

int Graph::GraphNode::getId() {return id_; }

int Graph::GraphNode::getViews() {return views_; }

string Graph::GraphNode::getLanguage() {return language_; }

int Graph::GraphNode::getMutualSize() {return mutuals_.size(); }

void Graph::GraphNode::setData(int id, int views, string language, set<int> mutuals){
    id_ = id;
    views_ = views;
    language_ = language;
    mutuals_ = mutuals;
}

Graph::Graph(ReadCSV file){
    for(auto i = 0; i < file.getSize(); i++){
        // Graph::GraphNode temporaryGraphNode(i, file.getViews(i), file.getLanguage(i), file.getMutuals()[i]);
        // graph_.push_back(temporaryGraphNode);
        cout << i << "\n";
    }
    map_ = file.getMutuals();
}

vector<Graph::GraphNode> Graph::getGraph(){ return graph_;}


map<int, set<int>> Graph::getMap(){ return map_; }
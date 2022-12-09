#include <iostream>
#include "ReadCSV.h"
#include "Data.h"
#include "Graph.h"
#include <numeric>
using namespace std;

int main()
{
    // Write your own main here
    ReadCSV obj("../lib/test_features.csv", "../lib/test_edges.csv");
    Graph g(obj);
    vector<Graph::GraphNode> graph = g.getGraph();

    std::vector<int> english_viewerships;    // EN
    std::vector<int> spanish_viewerships;    // ES
    std::vector<int> french_viewerships;     // FR
    std::vector<int> russian_viewerships;    // RU
    std::vector<int> german_viewerships;     // DE
    std::vector<int> japanese_viewerships;   // JA
    std::vector<int> portuguese_viewerships; // PT
    std::vector<int> korean_viewerships;     // KO
    std::vector<int> italian_viewerships;    // IT
    std::vector<int> chinese_viewerships;    // ZH

    for (int i = 0; i < (int) graph.size(); i++) {
        if (graph.at(i).getLanguage() == "EN") {
            english_viewerships.push_back(graph.at(i).getViews());
        } else if (graph.at(i).getLanguage() == "ES") {
            spanish_viewerships.push_back(graph.at(i).getViews());
        } else if (graph.at(i).getLanguage() == "FR") {
            french_viewerships.push_back(graph.at(i).getViews());
        } else if (graph.at(i).getLanguage() == "RU") {
            russian_viewerships.push_back(graph.at(i).getViews());
        } else if (graph.at(i).getLanguage() == "DE") {
            german_viewerships.push_back(graph.at(i).getViews());
        } else if (graph.at(i).getLanguage() == "JA") {
            japanese_viewerships.push_back(graph.at(i).getViews());
        } else if (graph.at(i).getLanguage() == "PT") {
            portuguese_viewerships.push_back(graph.at(i).getViews());
        } else if (graph.at(i).getLanguage() == "KO") {
            korean_viewerships.push_back(graph.at(i).getViews());
        } else if (graph.at(i).getLanguage() == "IT") {
            italian_viewerships.push_back(graph.at(i).getViews());
        } else if (graph.at(i).getLanguage() == "ZH") {
            chinese_viewerships.push_back(graph.at(i).getViews());
        }
    }

    int english_average_viewerships = std::accumulate(english_viewerships.begin(), english_viewerships.end(), 0) / (int) english_viewerships.size();

    int spanish_average_viewerships = std::accumulate(spanish_viewerships.begin(), spanish_viewerships.end(), 0) / (int) spanish_viewerships.size();

    int french_average_viewerships = std::accumulate(french_viewerships.begin(), french_viewerships.end(), 0) / (int) french_viewerships.size();

    int russian_average_viewerships = std::accumulate(russian_viewerships.begin(), russian_viewerships.end(), 0) / (int) russian_viewerships.size();

    int german_average_viewerships = std::accumulate(german_viewerships.begin(), german_viewerships.end(), 0) / (int) german_viewerships.size();

    int japanese_average_viewerships = std::accumulate(japanese_viewerships.begin(), japanese_viewerships.end(), 0) / (int) japanese_viewerships.size();

    int portuguese_average_viewerships = std::accumulate(portuguese_viewerships.begin(), portuguese_viewerships.end(), 0) / (int) portuguese_viewerships.size();

    int korean_average_viewerships = std::accumulate(korean_viewerships.begin(), korean_viewerships.end(), 0) / (int) korean_viewerships.size();

    int italian_average_viewerships = std::accumulate(italian_viewerships.begin(), italian_viewerships.end(), 0) / (int) italian_viewerships.size();

    int chinese_average_viewerships = std::accumulate(chinese_viewerships.begin(), chinese_viewerships.end(), 0) / (int) chinese_viewerships.size();

    



    std::ofstream output("../entry/graph.txt");
    std::string white_space = "";
    for (int i = 0; i < 5; i++) {
        output << white_space << i << "\n";
        white_space += "   ";
    }
    return 0;
}
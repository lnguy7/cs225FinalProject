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
    BTree b(obj);
    vector<Graph::GraphNode> graph = g.getGraph();








    //////////////////////////////////////////////////////////////////////////////////////
    //VISUALIZATION

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

    ////////
    //0. English (EN)
    //1. Spanish (ES)
    //2. French (FR)
    //3. Russian (RU)
    //4. German (DE)
    //5. Japanese (JA)
    //6. Portuguese (PT)
    //7. Korean (KO)
    //8. Italian (IT)
    //9. Chinese (ZH)

    //first vector is the language #, second vector is the 3 streamers, pair is the streamer and views
    //vector of vector of pairs pair<streamer id, views> 
    std::pair<int, int> starter1 = {0, 0};
    std::vector<std::pair<int, int>> starter2(3, starter1);
    std::vector<std::vector<std::pair<int, int>>> mostviewed(10, starter2);
    std::vector<std::string> languages = {"EN", "ES", "FR", "RU", "DE", "JA", "PT", "KO", "IT", "ZH"};
    std::vector<BTree::BTreeNode> tempBTree = b.getBTree();
    std::map<std::string, bool> truefalse;
    int counter = 0;
    for (size_t i = 0; i < languages.size(); i++) {
        truefalse.insert({languages[i], true});
    }
    for (size_t i = 0; i < tempBTree.size(); i++) {
        BTree::BTreeNode temp = tempBTree[i];
        std::pair<int, int> temp2 = {temp.getId(), temp.getStreamerViews()};
        std::string lang = temp.getLanguage();
        if (lang == "EN" && truefalse["EN"]) {
            mostviewed[0].push_back(temp2);
            if (mostviewed[0].size() == 3) {
                truefalse["EN"] = false;
                counter++;
            }
        }
        if (lang == "ES" && truefalse["ES"]) {
            mostviewed[1].push_back(temp2);
            if (mostviewed[1].size() == 3) {
                truefalse["ES"] = false;
                counter++;
            }
        }
        if (lang == "FR" && truefalse["FR"]) {
            mostviewed[2].push_back(temp2);
            if (mostviewed[2].size() == 3) {
                truefalse["FR"] = false;
                counter++;
            }
        }
        if (lang == "RU" && truefalse["RU"]) {
            mostviewed[3].push_back(temp2);
            if (mostviewed[3].size() == 3) {
                truefalse["RU"] = false;
                counter++;
            }
        }
        if (lang == "DE" && truefalse["DE"]) {
            mostviewed[4].push_back(temp2);
            if (mostviewed[4].size() == 3) {
                truefalse["DE"] = false;
                counter++;
            }
        }
        if (lang == "JA" && truefalse["JA"]) {
            mostviewed[5].push_back(temp2);
            if (mostviewed[5].size() == 3) {
                truefalse["JA"] = false;
                counter++;
            }
        }
        if (lang == "PT" && truefalse["PT"]) {
            mostviewed[6].push_back(temp2);
            if (mostviewed[6].size() == 3) {
                truefalse["PT"] = false;
                counter++;
            }
        }
        if (lang == "KO" && truefalse["KO"]) {
            mostviewed[7].push_back(temp2);
            if (mostviewed[7].size() == 3) {
                truefalse["KO"] = false;
                counter++;
            }
        }
        if (lang == "IT" && truefalse["IT"]) {
            mostviewed[8].push_back(temp2);
            if (mostviewed[8].size() == 3) {
                truefalse["IT"] = false;
                counter++;
            }
        }
        if (lang == "ZH" && truefalse["ZH"]) {
            mostviewed[9].push_back(temp2);
            if (mostviewed[9].size() == 3) {
                truefalse["ZH"] = false;
                counter++;
            }
        }
        if (counter == 10) {
            break;
        }
    }

    ////////

    std::ofstream output("../entry/graph.txt");
    output << "~~~~~~~STATISTICS AND RESULTS~~~~~~~" << "\n" << "\n";
    output << "-----Average Viewcount per Language-----" << "\n";
    output << "Language:                Avg. Views:" << "\n";

    return 0;
}
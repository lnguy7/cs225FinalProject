#include <iostream>
#include "ReadCSV.h"
#include "Graph.h"
#include "BTree.h"
#include <fstream>
#include <numeric>
#include <cstdlib>
using namespace std;

int main()
{
    std::cout << "start22" << std::endl;
    // Write your own main here
    ReadCSV obj;
    std::cout << "start223" << std::endl;
    Graph g(obj);
    std::cout << "start224" << std::endl;
    BTree b(obj);
    std::cout << "start225" << std::endl;
    vector<Graph::GraphNode> graph = g.getGraph();

    //Sorting needs a copy of BTree to work at this point.
    // BTree test(obj);
    // vector<BTree::BTreeNode> copy = test.getBTree();
    // test.MergeSort(copy, 0, int(test.getBTree().size()) - 1);


    ////////////////////////////////////////////////////////////////////////////////////
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

    unsigned long english_viewerships_sum = 0;
    unsigned long spanish_viewerships_sum = 0;
    unsigned long french_viewerships_sum = 0;
    unsigned long russian_viewerships_sum = 0;
    unsigned long german_viewerships_sum = 0;
    unsigned long japanese_viewerships_sum = 0;
    unsigned long portuguese_viewerships_sum = 0;
    unsigned long korean_viewerships_sum = 0;
    unsigned long italian_viewerships_sum = 0;
    unsigned long chinese_viewerships_sum = 0;

    for (size_t i = 0; i < graph.size(); i++) {
        std::string lan = graph.at(i).getLanguage();
        if (lan == "EN") {
            english_viewerships.push_back(graph.at(i).getViews());
            english_viewerships_sum += graph.at(i).getViews();
        } else if (lan == "ES") {
            spanish_viewerships.push_back(graph.at(i).getViews());
            spanish_viewerships_sum += graph.at(i).getViews();
        } else if (lan == "FR") {
            french_viewerships.push_back(graph.at(i).getViews());
            french_viewerships_sum += graph.at(i).getViews();
        } else if (lan == "RU") {
            russian_viewerships.push_back(graph.at(i).getViews());
            russian_viewerships_sum += graph.at(i).getViews();
        } else if (lan == "DE") {
            german_viewerships.push_back(graph.at(i).getViews());
            german_viewerships_sum += graph.at(i).getViews();
        } else if (lan == "JA") {
            japanese_viewerships.push_back(graph.at(i).getViews());
            japanese_viewerships_sum += graph.at(i).getViews();
        } else if (lan == "PT") {
            portuguese_viewerships.push_back(graph.at(i).getViews());
            portuguese_viewerships_sum += graph.at(i).getViews();
        } else if (lan == "KO") {
            korean_viewerships.push_back(graph.at(i).getViews());
            korean_viewerships_sum += graph.at(i).getViews();
        } else if (lan == "IT") {
            italian_viewerships.push_back(graph.at(i).getViews());
            italian_viewerships_sum += graph.at(i).getViews();
        } else if (lan == "ZH") {
            chinese_viewerships.push_back(graph.at(i).getViews());
            chinese_viewerships_sum += graph.at(i).getViews();
        }
    }

    unsigned long english_average_viewerships = (english_viewerships_sum / english_viewerships.size());

    unsigned long spanish_average_viewerships = (spanish_viewerships_sum / spanish_viewerships.size());

    unsigned long french_average_viewerships = (french_viewerships_sum / french_viewerships.size());

    unsigned long russian_average_viewerships =  (russian_viewerships_sum / russian_viewerships.size());

    unsigned long german_average_viewerships = (german_viewerships_sum / german_viewerships.size());

    unsigned long japanese_average_viewerships = (japanese_viewerships_sum / japanese_viewerships.size());

    unsigned long portuguese_average_viewerships = (portuguese_viewerships_sum / portuguese_viewerships.size());

    unsigned long korean_average_viewerships = (korean_viewerships_sum / korean_viewerships.size());

    unsigned long italian_average_viewerships = (italian_viewerships_sum/ italian_viewerships.size());

    unsigned long chinese_average_viewerships = (chinese_viewerships_sum / chinese_viewerships.size());

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
    std::vector<std::pair<int, int>> starter2;
    std::vector<std::vector<std::pair<int, int>>> mostviewed(10, starter2);
    std::vector<std::string> languages = {"EN", "ES", "FR", "RU", "DE", "JA", "PT", "KO", "IT", "ZH"};
    std::vector<BTree::BTreeNode> tempBTree = b.getBTree();
    b.MergeSort(tempBTree, 0, int(tempBTree.size())-1);
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

    std::vector<int> english_adj;    // EN
    std::vector<int> spanish_adj;    // ES
    std::vector<int> french_adj;     // FR
    std::vector<int> russian_adj;    // RU
    std::vector<int> german_adj;     // DE
    std::vector<int> japanese_adj;   // JA
    std::vector<int> portuguese_adj; // PT
    std::vector<int> korean_adj;     // KO
    std::vector<int> italian_adj;    // IT
    std::vector<int> chinese_adj;    // ZH

    int english_adj_sum = 0;
    int spanish_adj_sum = 0;
    int french_adj_sum = 0;
    int russian_adj_sum = 0;
    int german_adj_sum = 0;
    int japanese_adj_sum = 0;
    int portuguese_adj_sum = 0;
    int korean_adj_sum = 0;
    int italian_adj_sum = 0;
    int chinese_adj_sum = 0;

    for (size_t i = 0; i < graph.size(); i++) {
        std::string lang = graph.at(i).getLanguage();
        if (lang == "EN") {
            english_adj.push_back(graph.at(i).getId());
            english_adj_sum += graph.at(i).getMutualSize();
        } else if (lang == "ES") {
            spanish_adj.push_back(graph.at(i).getId());
            spanish_adj_sum += graph.at(i).getMutualSize();
        } else if (lang == "FR") {
            french_adj.push_back(graph.at(i).getId());
            french_adj_sum += graph.at(i).getMutualSize();
        } else if (lang == "RU") {
            russian_adj.push_back(graph.at(i).getId());
            russian_adj_sum += graph.at(i).getMutualSize();
        } else if (lang == "DE") {
            german_adj.push_back(graph.at(i).getId());
            german_adj_sum += graph.at(i).getMutualSize();
        } else if (lang == "JA") {
            japanese_adj.push_back(graph.at(i).getId());
            japanese_adj_sum += graph.at(i).getMutualSize();
        } else if (lang == "PT") {
            portuguese_adj.push_back(graph.at(i).getId());
            portuguese_adj_sum += graph.at(i).getMutualSize();
        } else if (lang == "KO") {
            korean_adj.push_back(graph.at(i).getId());
            korean_adj_sum += graph.at(i).getMutualSize();
        } else if (lang == "IT") {
            italian_adj.push_back(graph.at(i).getId());
            italian_adj_sum += graph.at(i).getMutualSize();
        } else if (lang == "ZH") {
            chinese_adj.push_back(graph.at(i).getId());
            chinese_adj_sum += graph.at(i).getMutualSize();
        }
    }

    unsigned int english_average_adj = (english_adj_sum / english_adj.size());

    unsigned int spanish_average_adj = (spanish_adj_sum / spanish_adj.size());

    unsigned int french_average_adj = (french_adj_sum / french_adj.size());

    unsigned int russian_average_adj = (russian_adj_sum / russian_adj.size());

    unsigned int german_average_adj = (german_adj_sum / german_adj.size());

    unsigned int japanese_average_adj = (japanese_adj_sum / japanese_adj.size());

    unsigned int portuguese_average_adj = (portuguese_adj_sum / portuguese_adj.size());

    unsigned int korean_average_adj = (korean_adj_sum / korean_adj.size());

    unsigned int italian_average_adj = (italian_adj_sum / italian_adj.size());

    unsigned int chinese_average_adj = (chinese_adj_sum / chinese_adj.size());


    ///////

    std::ofstream output("../entry/graph.txt");
    output << "~~~~~~~STATISTICS AND RESULTS~~~~~~~" << "\n" << "\n";
    output << "-----Average Viewcount per Language-----" << "\n";
    output << "Language:                Avg. Views:" << "\n";
    output << "English                  " << english_average_viewerships << "\n";
    output << "Spanish                  " << spanish_average_viewerships << "\n";
    output << "French                   " << french_average_viewerships << "\n";
    output << "Russian                  " << russian_average_viewerships << "\n";
    output << "German                   " << german_average_viewerships << "\n";
    output << "Japanese                 " << japanese_average_viewerships << "\n";
    output << "Portuguese               " << portuguese_average_viewerships << "\n";
    output << "Korean                   " << korean_average_viewerships << "\n";
    output << "Italian                  " << italian_average_viewerships << "\n";
    output << "Chinese                  " << chinese_average_viewerships << "\n" << "\n";
    output << "-----Top Streamers per Language-----" << "\n";
    output << "    ###ID###         ###VIEWS###" << "\n";
    output << "            ~English~" << "\n";
    output << "1. " << mostviewed[0][0].first << "            " << mostviewed[0][0].second << "\n";
    output << "2. " << mostviewed[0][1].first << "            " << mostviewed[0][1].second << "\n";
    output << "3. " << mostviewed[0][2].first << "            " << mostviewed[0][2].second << "\n" << "\n";
    output << "            ~Spanish~" << "\n";
    output << "1. " << mostviewed[1][0].first << "            " << mostviewed[1][0].second << "\n";
    output << "2. " << mostviewed[1][1].first << "            " << mostviewed[1][1].second << "\n";
    output << "3. " << mostviewed[1][2].first << "            " << mostviewed[1][2].second << "\n" << "\n";
    output << "            ~French~" << "\n";
    output << "1. " << mostviewed[2][0].first << "            " << mostviewed[2][0].second << "\n";
    output << "2. " << mostviewed[2][1].first << "            " << mostviewed[2][1].second << "\n";
    output << "3. " << mostviewed[2][2].first << "            " << mostviewed[2][2].second << "\n" << "\n";
    output << "            ~Russian~" << "\n";
    output << "1. " << mostviewed[3][0].first << "            " << mostviewed[3][0].second << "\n";
    output << "2. " << mostviewed[3][1].first << "            " << mostviewed[3][1].second << "\n";
    output << "3. " << mostviewed[3][2].first << "            " << mostviewed[3][2].second << "\n" << "\n";
    output << "            ~German~" << "\n";
    output << "1. " << mostviewed[4][0].first << "            " << mostviewed[4][0].second << "\n";
    output << "2. " << mostviewed[4][1].first << "            " << mostviewed[4][1].second << "\n";
    output << "3. " << mostviewed[4][2].first << "            " << mostviewed[4][2].second << "\n" << "\n";
    output << "            ~Japanese~" << "\n";
    output << "1. " << mostviewed[5][0].first << "            " << mostviewed[5][0].second << "\n";
    output << "2. " << mostviewed[5][1].first << "            " << mostviewed[5][1].second << "\n";
    output << "3. " << mostviewed[5][2].first << "            " << mostviewed[5][2].second << "\n" << "\n";
    output << "           ~Portuguese~" << "\n";
    output << "1. " << mostviewed[6][0].first << "            " << mostviewed[6][0].second << "\n";
    output << "2. " << mostviewed[6][1].first << "            " << mostviewed[6][1].second << "\n";
    output << "3. " << mostviewed[6][2].first << "            " << mostviewed[6][2].second << "\n" << "\n";
    output << "            ~Korean~" << "\n";
    output << "1. " << mostviewed[7][0].first << "            " << mostviewed[7][0].second << "\n";
    output << "2. " << mostviewed[7][1].first << "            " << mostviewed[7][1].second << "\n";
    output << "3. " << mostviewed[7][2].first << "            " << mostviewed[7][2].second << "\n" << "\n";
    output << "            ~Italian~" << "\n";
    output << "1. " << mostviewed[8][0].first << "            " << mostviewed[8][0].second << "\n";
    output << "2. " << mostviewed[8][1].first << "            " << mostviewed[8][1].second << "\n";
    output << "3. " << mostviewed[8][2].first << "            " << mostviewed[8][2].second << "\n" << "\n";
    output << "            ~Chinese~" << "\n" << "\n";
    output << "1. " << mostviewed[9][0].first << "            " << mostviewed[9][0].second << "\n";
    output << "2. " << mostviewed[9][1].first << "            " << mostviewed[9][1].second << "\n";
    output << "3. " << mostviewed[9][2].first << "            " << mostviewed[9][2].second << "\n" << "\n";
    output << "-----Average Mutual Followers per Language-----" << "\n";
    output << "Language:                Avg. Edges:" << "\n";
    output << "English                  " << english_average_adj << "\n";
    output << "Spanish                  " << spanish_average_adj << "\n";
    output << "French                   " << french_average_adj << "\n";
    output << "Russian                  " << russian_average_adj << "\n";
    output << "German                   " << german_average_adj << "\n";
    output << "Japanese                 " << japanese_average_adj << "\n";
    output << "Portuguese               " << portuguese_average_adj << "\n";
    output << "Korean                   " << korean_average_adj << "\n";
    output << "Italian                  " << italian_average_adj << "\n";
    output << "Chinese                  " << chinese_average_adj << "\n" << "\n";

    return 0;
}
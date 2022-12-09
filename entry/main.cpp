#include <iostream>
#include "ReadCSV.h"
#include "Data.h"
#include "Graph.h"
#include <numeric>
using namespace std;

int main()
{
    std::cout << "start22" << std::endl;
    // Write your own main here
    ReadCSV obj("../lib/large_twitch_features.csv", "../lib/large_twitch_edges.csv");
    std::cout << "start223" << std::endl;
    Graph g(obj);
    std::cout << "start224" << std::endl;
    BTree b(obj);
    std::cout << "start225" << std::endl;
    vector<Graph::GraphNode> graph = g.getGraph();

    //Sorting needs a copy of BTree to work at this point.
    BTree test(obj);
    vector<BTree::BTreeNode> copy = test.getBTree();
    test.MergeSort(copy, 0, int(test.getBTree().size()) - 1);


<<<<<<< HEAD
=======


>>>>>>> b4b4198bf40154f9fdcfaa26f09e73e6a6799622
    std::cout << "start" << std::endl;

    //////////////////////////////////////////////////////////////////////////////////////
    //VISUALIZATION

<<<<<<< HEAD
    // std::vector<int> english_viewerships;    // EN
    // std::vector<int> spanish_viewerships;    // ES
    // std::vector<int> french_viewerships;     // FR
    // std::vector<int> russian_viewerships;    // RU
    // std::vector<int> german_viewerships;     // DE
    // std::vector<int> japanese_viewerships;   // JA
    // std::vector<int> portuguese_viewerships; // PT
    // std::vector<int> korean_viewerships;     // KO
    // std::vector<int> italian_viewerships;    // IT
    // std::vector<int> chinese_viewerships;    // ZH

    // int english_viewerships_sum = 0;
    // int spanish_viewerships_sum = 0;
    // int french_viewerships_sum = 0;
    // int russian_viewerships_sum = 0;
    // int german_viewerships_sum = 0;
    // int japanese_viewerships_sum = 0;
    // int portuguese_viewerships_sum = 0;
    // int korean_viewerships_sum = 0;
    // int italian_viewerships_sum = 0;
    // int chinese_viewerships_sum = 0;

    // for (size_t i = 0; i < graph.size(); i++) {
    //     if (graph.at(i).getLanguage() == "EN") {
    //         english_viewerships.push_back(graph.at(i).getViews());
    //         english_viewerships_sum += graph.at(i).getViews();
    //     } else if (graph.at(i).getLanguage() == "ES") {
    //         spanish_viewerships.push_back(graph.at(i).getViews());
    //         spanish_viewerships_sum += graph.at(i).getViews();
    //     } else if (graph.at(i).getLanguage() == "FR") {
    //         french_viewerships.push_back(graph.at(i).getViews());
    //         french_viewerships_sum += graph.at(i).getViews();
    //     } else if (graph.at(i).getLanguage() == "RU") {
    //         russian_viewerships.push_back(graph.at(i).getViews());
    //         russian_viewerships_sum += graph.at(i).getViews();
    //     } else if (graph.at(i).getLanguage() == "DE") {
    //         german_viewerships.push_back(graph.at(i).getViews());
    //         german_viewerships_sum += graph.at(i).getViews();
    //     } else if (graph.at(i).getLanguage() == "JA") {
    //         japanese_viewerships.push_back(graph.at(i).getViews());
    //         japanese_viewerships_sum += graph.at(i).getViews();
    //     } else if (graph.at(i).getLanguage() == "PT") {
    //         portuguese_viewerships.push_back(graph.at(i).getViews());
    //         portuguese_viewerships_sum += graph.at(i).getViews();
    //     } else if (graph.at(i).getLanguage() == "KO") {
    //         korean_viewerships.push_back(graph.at(i).getViews());
    //         korean_viewerships_sum += graph.at(i).getViews();
    //     } else if (graph.at(i).getLanguage() == "IT") {
    //         italian_viewerships.push_back(graph.at(i).getViews());
    //         italian_viewerships_sum += graph.at(i).getViews();
    //     } else if (graph.at(i).getLanguage() == "ZH") {
    //         chinese_viewerships.push_back(graph.at(i).getViews());
    //         chinese_viewerships_sum += graph.at(i).getViews();
    //     }
    // }
=======
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

    int english_viewerships_sum = 0;
    int spanish_viewerships_sum = 0;
    int french_viewerships_sum = 0;
    int russian_viewerships_sum = 0;
    int german_viewerships_sum = 0;
    int japanese_viewerships_sum = 0;
    int portuguese_viewerships_sum = 0;
    int korean_viewerships_sum = 0;
    int italian_viewerships_sum = 0;
    int chinese_viewerships_sum = 0;

    for (size_t i = 0; i < graph.size(); i++) {
        if (graph.at(i).getLanguage() == "EN") {
            english_viewerships.push_back(graph.at(i).getViews());
            english_viewerships_sum += graph.at(i).getViews();
        } else if (graph.at(i).getLanguage() == "ES") {
            spanish_viewerships.push_back(graph.at(i).getViews());
            spanish_viewerships_sum += graph.at(i).getViews();
        } else if (graph.at(i).getLanguage() == "FR") {
            french_viewerships.push_back(graph.at(i).getViews());
            french_viewerships_sum += graph.at(i).getViews();
        } else if (graph.at(i).getLanguage() == "RU") {
            russian_viewerships.push_back(graph.at(i).getViews());
            russian_viewerships_sum += graph.at(i).getViews();
        } else if (graph.at(i).getLanguage() == "DE") {
            german_viewerships.push_back(graph.at(i).getViews());
            german_viewerships_sum += graph.at(i).getViews();
        } else if (graph.at(i).getLanguage() == "JA") {
            japanese_viewerships.push_back(graph.at(i).getViews());
            japanese_viewerships_sum += graph.at(i).getViews();
        } else if (graph.at(i).getLanguage() == "PT") {
            portuguese_viewerships.push_back(graph.at(i).getViews());
            portuguese_viewerships_sum += graph.at(i).getViews();
        } else if (graph.at(i).getLanguage() == "KO") {
            korean_viewerships.push_back(graph.at(i).getViews());
            korean_viewerships_sum += graph.at(i).getViews();
        } else if (graph.at(i).getLanguage() == "IT") {
            italian_viewerships.push_back(graph.at(i).getViews());
            italian_viewerships_sum += graph.at(i).getViews();
        } else if (graph.at(i).getLanguage() == "ZH") {
            chinese_viewerships.push_back(graph.at(i).getViews());
            chinese_viewerships_sum += graph.at(i).getViews();
        }
    }

    int english_average_viewerships = (int) ((int) english_viewerships_sum / (int) english_viewerships.size());
>>>>>>> b4b4198bf40154f9fdcfaa26f09e73e6a6799622

    // int english_average_viewerships = (int) ((int) english_viewerships_sum / (int) english_viewerships.size());

    // int spanish_average_viewerships = (int) ((int) spanish_viewerships_sum / (int) spanish_viewerships.size());

    // int french_average_viewerships = (int) ((int) french_viewerships_sum / (int) french_viewerships.size());

    // int russian_average_viewerships = (int) ((int) russian_viewerships_sum / (int) russian_viewerships.size());

    // int german_average_viewerships = (int) ((int) german_viewerships_sum / (int) german_viewerships.size());

    // int japanese_average_viewerships = (int) ((int) japanese_viewerships_sum / (int) japanese_viewerships.size());

    // int portuguese_average_viewerships = (int) ((int) portuguese_viewerships_sum / (int) portuguese_viewerships.size());

    // int korean_average_viewerships = (int) ((int) korean_viewerships_sum / (int) korean_viewerships.size());

    // int italian_average_viewerships = (int) ((int) italian_viewerships_sum/ (int) italian_viewerships.size());

<<<<<<< HEAD
    // int chinese_average_viewerships = (int) ((int) chinese_viewerships_sum / (int) chinese_viewerships.size());

    // std::cout << "start2" << std::endl;
    // ////////
    // //0. English (EN)
    // //1. Spanish (ES)
    // //2. French (FR)
    // //3. Russian (RU)
    // //4. German (DE)
    // //5. Japanese (JA)
    // //6. Portuguese (PT)
    // //7. Korean (KO)
    // //8. Italian (IT)
    // //9. Chinese (ZH)

    // //first vector is the language #, second vector is the 3 streamers, pair is the streamer and views
    // //vector of vector of pairs pair<streamer id, views> 
    // std::pair<int, int> starter1 = {0, 0};
    // std::vector<std::pair<int, int>> starter2(3, starter1);
    // std::vector<std::vector<std::pair<int, int>>> mostviewed(10, starter2);
    // std::vector<std::string> languages = {"EN", "ES", "FR", "RU", "DE", "JA", "PT", "KO", "IT", "ZH"};
    // std::vector<BTree::BTreeNode> tempBTree = b.getBTree();
    // std::map<std::string, bool> truefalse;
    // int counter = 0;
    // for (size_t i = 0; i < languages.size(); i++) {
    //     truefalse.insert({languages[i], true});
    // }
    // for (size_t i = 0; i < tempBTree.size(); i++) {
    //     BTree::BTreeNode temp = tempBTree[i];
    //     std::pair<int, int> temp2 = {temp.getId(), temp.getStreamerViews()};
    //     std::string lang = temp.getLanguage();
    //     if (lang == "EN" && truefalse["EN"]) {
    //         mostviewed[0].push_back(temp2);
    //         if (mostviewed[0].size() == 3) {
    //             truefalse["EN"] = false;
    //             counter++;
    //         }
    //     }
    //     if (lang == "ES" && truefalse["ES"]) {
    //         mostviewed[1].push_back(temp2);
    //         if (mostviewed[1].size() == 3) {
    //             truefalse["ES"] = false;
    //             counter++;
    //         }
    //     }
    //     if (lang == "FR" && truefalse["FR"]) {
    //         mostviewed[2].push_back(temp2);
    //         if (mostviewed[2].size() == 3) {
    //             truefalse["FR"] = false;
    //             counter++;
    //         }
    //     }
    //     if (lang == "RU" && truefalse["RU"]) {
    //         mostviewed[3].push_back(temp2);
    //         if (mostviewed[3].size() == 3) {
    //             truefalse["RU"] = false;
    //             counter++;
    //         }
    //     }
    //     if (lang == "DE" && truefalse["DE"]) {
    //         mostviewed[4].push_back(temp2);
    //         if (mostviewed[4].size() == 3) {
    //             truefalse["DE"] = false;
    //             counter++;
    //         }
    //     }
    //     if (lang == "JA" && truefalse["JA"]) {
    //         mostviewed[5].push_back(temp2);
    //         if (mostviewed[5].size() == 3) {
    //             truefalse["JA"] = false;
    //             counter++;
    //         }
    //     }
    //     if (lang == "PT" && truefalse["PT"]) {
    //         mostviewed[6].push_back(temp2);
    //         if (mostviewed[6].size() == 3) {
    //             truefalse["PT"] = false;
    //             counter++;
    //         }
    //     }
    //     if (lang == "KO" && truefalse["KO"]) {
    //         mostviewed[7].push_back(temp2);
    //         if (mostviewed[7].size() == 3) {
    //             truefalse["KO"] = false;
    //             counter++;
    //         }
    //     }
    //     if (lang == "IT" && truefalse["IT"]) {
    //         mostviewed[8].push_back(temp2);
    //         if (mostviewed[8].size() == 3) {
    //             truefalse["IT"] = false;
    //             counter++;
    //         }
    //     }
    //     if (lang == "ZH" && truefalse["ZH"]) {
    //         mostviewed[9].push_back(temp2);
    //         if (mostviewed[9].size() == 3) {
    //             truefalse["ZH"] = false;
    //             counter++;
    //         }
    //     }
    //     if (counter == 10) {
    //         break;
    //     }
    // }
    // ////////
    // std::cout << "end" << std::endl;

    // std::ofstream output("../entry/graph.txt");
    // output << "~~~~~~~STATISTICS AND RESULTS~~~~~~~" << "\n" << "\n";
    // output << "-----Average Viewcount per Language-----" << "\n";
    // output << "Language:                Avg. Views:" << "\n";
    // output << "English                  " << english_average_viewerships << "\n";
    // output << "Spanish                  " << spanish_average_viewerships << "\n";
    // output << "French                   " << french_average_viewerships << "\n";
    // output << "Russian                  " << russian_average_viewerships << "\n";
    // output << "German                   " << german_average_viewerships << "\n";
    // output << "Japanese                 " << japanese_average_viewerships << "\n";
    // output << "Portuguese               " << portuguese_average_viewerships << "\n";
    // output << "Korean                   " << korean_average_viewerships << "\n";
    // output << "Italian                  " << italian_average_viewerships << "\n";
    // output << "Chinese                  " << chinese_average_viewerships << "\n" << "\n";
    // output << "-----Top Streamers per Language-----" << "\n";
    // output << "    ###ID###         ###VIEWS###" << "\n";
=======
    std::cout << "start2" << std::endl;
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
    std::cout << "end" << std::endl;

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
>>>>>>> b4b4198bf40154f9fdcfaa26f09e73e6a6799622
    

    return 0;
}
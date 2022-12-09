# cs225FinalProject
F22 CS225 Final (Katy Sick, Bella Cruz, Ivan Ramos, Lucas Nguyen)


Get the average viewcount for each language
Top three most viewed streamers and their viewcount per language
Average amount of adjacents for each node in a certain language

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
std::vector<BTreeNode> tempBTree = getBTree();
std::map<std::string, bool> truefalse;
int counter = 0;
for (size_t i = 0; i < languages.size(); i++) {
    truefalse.insert({languages[i], true});
}
for (size_t i = 0; i < tempBTree.size(); i++) {
    BTreeNode temp = tempBTree[i];
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

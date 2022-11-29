 /**
 * @file ReadCSV.h
 * File converts reads CSV files as needed
 *
 * @author Lucas Nguyen
 */

 #pragma once

#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <fstream>
#include <sstream>
#include <set>

using namespace std;

class ReadCSV{
    public:
    
        vector<string> getFeatureVector();
    private:
        const string & featureFile_;
        const string & edgesFile_;
}
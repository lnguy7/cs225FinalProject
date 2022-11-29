 /**
 * @file ReadCSV.h
 * File converts reads CSV files as needed
 *
 * @author Lucas Nguyen
 */

 #pragma once

#include <string>
#include <vector>
#include <iostream>

using namespace std;

class ReadCSV{
    public:
        ReadCSV(const string & featureFile, const string & edgesFile);
        vector<string> getFeatureVector();
    private:
        string & featureFile_;
        string & edgesFile_;
};
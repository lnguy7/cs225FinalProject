 /**
 * @file ReadCSV.cpp
 * File converts reads CSV files as needed
 *
 * @author Lucas Nguyen
 */
#include <string>
#include <vector>
#include <iostream>
#include "ReadCSV.h"

using namespace std;

ReadCSV::ReadCSV(const string & featureFile, const string & edgesFile){
    featureFile_ = featureFile;
    edgesFile_ = edgesFile;
}
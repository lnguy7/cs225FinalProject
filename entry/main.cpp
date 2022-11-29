#include <iostream>
#include "ReadCSV.h"
#include "Data.h"
using namespace std;

int main()
{
    // Write your own main here
    ReadCSV obj("../lib/large_twitch_features.csv", "../lib/large_twitch_edges.csv");
    for(int i = 0; i < 10; i++){
        cout << obj.getFeatureVector(i)[0] << ", " << obj.getFeatureVector(i)[1] << ", " << obj.getFeatureVector(i)[2] << endl;
    }
    
    return 0;
}

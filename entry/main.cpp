#include <iostream>
#include "ReadCSV.h"
#include "Data.h"
using namespace std;

int main()
{
    // Write your own main here
    ReadCSV obj("../lib/large_twitch_features.csv", "../lib/large_twitch_edges.csv");
    return 0;
}

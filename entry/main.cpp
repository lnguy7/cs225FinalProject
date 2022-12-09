#include <iostream>
#include "ReadCSV.h"
#include "Data.h"
#include "Graph.h"
using namespace std;

int main()
{
    // Write your own main here
    ReadCSV obj("../lib/test_features.csv", "../lib/test_edges.csv");
    // the important part
    // std::vector<std::string> one = {"0", "Spanish"};
    // std::vector<std::string> 
    // std::vector<std::string> five_hundred = {"500", "French"};
    // std::vector<std::string> seventy_five = {"75", "Portuguese"};


    // std::ofstream output("../entry/graph.txt");
    // std::string white_space = "";
    // for (int i = 0; i < 5; i++) {
    //     output << white_space << i << "\n";
    //     white_space += "   ";
    // }
    return 0;
}
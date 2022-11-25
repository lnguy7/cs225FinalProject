 /**
 * @file Data.cpp
 * Implementation of the Data class.
 */

#include "Data.h"
#include <sstream>

Data::Data() {}

BTree Data::get_data_b_tree() {
    return data_b_tree;
}

void Data::create_B_tree(vector<vector<string>> data_in_vector_structure) {
    vector<BTree::BTreeNode> data_in_b_tree_nodes;

    int index = 0;
    while (index < (int) data_in_vector_structure.at(0).size()) {
        BTree::BTreeNode b_tree_node = BTree::BTreeNode(data_in_vector_structure.at(0));
        data_in_b_tree_nodes.push_back(b_tree_node);
        index++;
    }

    data_b_tree = BTree(data_in_b_tree_nodes);
}

vector<vector<string>> Data::file_to_nested_vector(const std::string& filename) {
    std::vector<std::vector<std::string>> my_vector;
    std::string one_string_all_inputs = data_to_string(filename);
    one_string_all_inputs = trim_all(one_string_all_inputs);

    char line = '\n';
    std::vector<std::string> individual_lines;
    int number_of_lines = split_string(one_string_all_inputs, line, individual_lines);

    int index = 0;
    while (index < (int) individual_lines.size()) {
        char comma = ',';
        std::vector<std::string> individual_objects;
        int number_of_objects = split_string(individual_lines.at(index), comma, individual_objects);

        int index_2 = 0;
        while (index_2 < (int) individual_objects.size()) {
            individual_objects.at(index_2) = trim_all(individual_objects.at(index_2));
            index_2++;
        }
        
        my_vector.push_back(individual_objects);
        individual_objects.clear();
        index++;
    }
    return my_vector;
}

string Data::data_to_string(const string& filename) {
    ifstream text(filename);
    stringstream string_stream;
    if (text.is_open()) {
        string_stream << text.rdbuf();
    }
    return string_stream.str();
}

string Data::trim_right_side(const string& string) {
    std::string temp = string;
    return temp.erase(temp.find_last_not_of(" ") + 1);
}

string Data::trim_left_side(const string& string) {
    std::string temp = string;
    return temp.erase(0, temp.find_first_not_of(" "));
    return " ";
}

string Data::trim_all(const string& string) {
    std::string temp = string;
    return trim_left_side(trim_right_side(string));
    return " ";
}

int Data::split_string(const string& string_one, char sep, vector<string>& fields) {
    string string = string_one;
    string::size_type position;
    while((position = string.find(sep)) != string::npos) {
        fields.push_back(string.substr(0, position));
        string.erase(0, position + 1);  
    }
    fields.push_back(string);
    return fields.size();
}

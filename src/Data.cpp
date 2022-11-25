 /**
 * @file Data.cpp
 * Implementation of the Data class.
 */

#include "Data.h"
#include <sstream>

BTree Data::get_data_b_tree() {
    return data_b_tree;
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
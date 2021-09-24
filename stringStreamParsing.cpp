// Topic: Use of stringstream (#include<sstream>)
// 
// Created on: Sep 24, 2021
// Created by: Georgi Nikolov
//

#include <sstream>
#include <vector>
#include <iostream>

using namespace std;

vector<int> parseInts(string str) {
	stringstream parser(str); // string from cin
    string value;  // Parsed "value"
    
    vector<int> sol;  // Push solution into this vector
    
    while (getline(parser, value, ',')) {
        int convert = stoi(value);        // Converting into int
        sol.push_back(convert);           // Populate new vector
    }
    
    return sol;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
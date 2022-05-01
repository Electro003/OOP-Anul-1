#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <fstream>
#include <sstream>
#include <iterator>

using namespace std;
string citire(const string& fileName);
vector<string> cuvinte(string input);
string tolower(string& str);
struct Compare
{
	bool operator()(const pair<string, int>& p1, const pair<string, int>& p2) const;
};
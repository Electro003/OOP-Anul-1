#include "Functii.h"
string citire(const string& fileName) {
    string result;
    ifstream file(fileName);
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            result += line;
        }
        file.close();
    }
    return result;
}

vector<string> cuvinte(string input) {
    vector<string> words;
    string result;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] != ' ' && input[i] != '.' && input[i] != ',' && input[i] != '?' && input[i] != '!')
        {
            result += input[i];
        }
        else
        {
            if (result != "")
            {
                words.push_back(result);
                result.erase();
            }
        }
    }
    return words;
}
string tolower(string& str)
{
    for (int i = 0; i < str.length(); i++)
    {
        str[i] = tolower(str[i]);
    }
    return str;
}

bool Compare::operator()(const pair<string, int>& p1, const pair<string, int>& p2) const
{
    if (p1.second != p2.second)
        return p1.second < p2.second;
    else
        return p1.first > p2.first;
}

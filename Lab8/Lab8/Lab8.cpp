// Lab8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Functii.h"

int main()
{
    string fileContent;
    map <string, int> wordCount;
    fileContent = citire("Text.txt");
    vector <string> words = cuvinte(fileContent);
	
    /*for (int i = 0; i < words.size(); i++)
    {
        cout << words.at(i)<<endl;
    }*/
	
    for (int i = 0; i < words.size(); i++)
    {
        if (wordCount.find(tolower(words.at(i))) == wordCount.end())
             wordCount[words.at(i)] = 1;
        else
             wordCount[words.at(i)]++;
    }
	
    priority_queue<pair<string,int> , vector<pair<string, int>>, Compare> queue;
    for (auto it = wordCount.begin(); it != wordCount.end(); it++)
    {
        //cout << it->first << " : " << it->second << endl;
        pair <string, int> aux(it->first, it->second);
        queue.push(aux);
    }
	
    while (queue.size() != 0)
    {
        pair <string, int> aux = queue.top();
        queue.pop();
        cout << aux.first << " : " << aux.second << endl;
    }


}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

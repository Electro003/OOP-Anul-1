#pragma once
#include <iostream>
#include <vector>
#include <cstdarg>
#include <string>
#include <sstream>
using namespace std;
class Sort
{
    int count;
    int* v;
    // add data members

public:

    // add constuctors
    Sort() :count(5){
        this->v = new int[this->count];
        for (int i = 0; i < this->count; i++)
            v[i] = 0;
    }; // ??????
    Sort(int nElements , int min , int max);
    Sort(int* vector, int nrElements);
    Sort(int nrElements, ...);
    Sort(string string);
    ~Sort();


    void InsertSort(bool ascendent = false);

    void QuickSort(bool ascendent = false);

    void BubbleSort(bool ascendent = false);

    void Print();

    int  GetElementsCount();

    int  GetElementFromIndex(int index);

};
// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Sort.h"


int main()
{   
    int v[] = { 1,2,3 };
    Sort a(5,12,34);
    Sort b(v, 3);
    Sort c(7, 1, 2, 3, 4, 5, 6, 7);
    Sort d("10,11");
    Sort e;
    a.Print();
    cout << endl;
    b.Print();
    cout << endl;
    c.Print();
    cout << endl;
    d.Print();
    cout << endl;
    e.Print();


    /*stringstream a;
    string s = "1.4,4.4,5.4,6.4";
    a << s;
    float x;
    while (a >> x)
    {
        cout << x << endl;
        if (a.peek() == ',')
            a.ignore();
    }*/
    
    
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

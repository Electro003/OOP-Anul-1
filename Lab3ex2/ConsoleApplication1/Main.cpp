// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
bool isodd(int x)
{
    if (x % 2 == 0)
        return 0;
    return 1;
}
bool isprime(int x)
{
    if (x == 2 || x % 2 == 0)
        return 0;
    for (int i = 3; i * i <= x; i += 2)
        if (x % i == 0)
            return 0;
    return 1;
        
}
int main()
{
    //int v[5] = { 12,34,763,43,23 };
    //int a[5][2] = { {1,2}, {3,4}, {4,5 }, {6,7} , {8,9} };

    ////         v[0] v[1] v[2] v[3] v[4]
    //for (int i = 0; i < 5; i++)
    //    printf("%d ", v[i]);
    //for (int i = 0; i < 5; i++)
    //{
    //    std::cout << std::endl;
    //    for (int j = 0; j < 2; j++)
    //        std::cout << a[i][j] << " ";
    //}
    int prop = 0;
    for(int i=1; i<=6 ; i++)
        for (int j = 1; j <= 6; j++)
        {
            if (i+j<4)
            {
                cout << i << " " << j << endl;
                prop += 1;
            }
        }
    cout << prop;

    return 0;
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

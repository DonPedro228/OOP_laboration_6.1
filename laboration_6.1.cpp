#include "Array.h"
#include <iostream>
#include <time.h>
#include <stdexcept>
#include <exception>
#include <cmath>
#include <algorithm> 
using namespace std;
typedef Array::value_type* TArray;

int main()
{
    int n;
    cout << "n = "; cin >> n;

    Array c = Array(n);
    srand((unsigned)time(NULL));
    Array::value_type A = -50;
    Array::value_type B = 50;
    TArray a = new Array::value_type[n];
    for (int i = 0; i < n; i++)
        a[i] = A + rand() % int(B - A + 1);

    Array::iterator l = const_cast<Array::iterator>(c.begin());
    for (int j = 0; j < n; j++, l++)
        *l = a[j];

   
    sort(c.begin(), c.end());

    c.sumAverage(c);
    cout << "Array with sum and average: ";
    cout << c;
    cout << endl;

    c.square_min(c);
    cout << "Array with min square: ";
    cout << c;


    delete[] a;

    cin.get();
    cin.get();
    return 0;
}

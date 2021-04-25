#include <bits/stdc++.h>
using namespace std;

int main() 
{    
    int first, second;

    cin >> first;
    cin >> second;

    cout << first * ((second % 100) % 10) << endl;
    cout << first * ((second % 100) - ((second % 100) % 10)) / 10 << endl;
    cout << first * (second - (second % 100)) / 100 << endl;
    cout << first * ((second % 100) % 10) + first * ((second % 100) - ((second % 100) % 10)) + first * (second - (second % 100)) << endl;
}
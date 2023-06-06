/**
 * Link: https://codeforces.com/problemset/problem/41/A
 * @author Alper Duru
 */
#include <iostream>
#include <cstring>
#include <math.h>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;

    reverse(s.begin(), s.end());

    if (s == t)
            cout
        << "YES";
    else
        cout << "NO";
    
    return 0;
}
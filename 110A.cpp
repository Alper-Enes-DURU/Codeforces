/**
 * Link: https://codeforces.com/problemset/problem/110/A
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
    string s;
    cin >> s;

    int luckyCount = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '4' || s[i] == '7')
            luckyCount++;
    }

    if (luckyCount == 4 || luckyCount == 7)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
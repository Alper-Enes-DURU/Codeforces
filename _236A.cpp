/**
 * Link: https://codeforces.com/problemset/problem/236/A
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

int countOfUniqueChars(string s);

int main()
{
    string s;
    cin >> s;

    int res = countOfUniqueChars(s);

    if (res % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";

    return 0;
}

int countOfUniqueChars(string s)
{
    map<char, int> x;
    for (int i = 0; i < s.length(); i++)
    {
        x[s[i]]++;
    }

    return x.size();
}
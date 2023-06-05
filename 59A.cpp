/**
 * Link: https://codeforces.com/problemset/problem/59/A
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

    int caps = 0, lows = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (isupper(s[i]))
            caps++;
        else
            lows++;
    }

    if (caps > lows)
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    else
        transform(s.begin(), s.end(), s.begin(), ::tolower);

    cout << s;
    return 0;
}
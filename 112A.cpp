/**
 * Link: https://codeforces.com/problemset/problem/112/A
 * @author Alper Duru
 */
#include <iostream>
#include <math.h>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int main()
{
    string s1, s2;
    int result;
    cin >> s1 >> s2;

    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] == s2[i])
            result = 0;
        else if (s1[i] < s2[i])
        {
            result = -1;
            break;
        }
        else if (s1[i] > s2[i])
        {
            result = 1;
            break;
        }
    }

    cout << result;
    return 0;
}
/**
 * Link: https://codeforces.com/problemset/problem/61/A
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
    string a, b;
    string result = "";
    cin >> a >> b;

    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] != b[i])
            result.push_back('1');
        else
            result.push_back('0');
    }

    cout << result;
    return 0;
}
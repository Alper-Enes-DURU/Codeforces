/**
 * Link: https://codeforces.com/problemset/problem/71/A
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
    int n;
    cin >> n;

    vector<string> arr;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        if (s.length() > 10)
        {
            string x = "";
            x += s[0];
            x.append(to_string(s.length() - 2));
            x += s[s.length() - 1];
            arr.push_back(x);
        }
        else
            arr.push_back(s);
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
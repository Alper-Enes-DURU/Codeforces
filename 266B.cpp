/**
 * Link: https://codeforces.com/problemset/problem/266/B
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
    int n, t;
    cin >> n >> t;

    string q;

    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        q.push_back(c);
    }

    for (int x = 0; x < t; x++)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (q[i] == 'B' && q[i + 1] == 'G')
            {
                q[i] = 'G';
                q[i + 1] = 'B';
                i++;
            }
        }
    }

    cout << q;
    return 0;
}
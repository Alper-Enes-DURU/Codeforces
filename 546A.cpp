/**
 * Link: https://codeforces.com/problemset/problem/546/A
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
    int k, n, w, total = 0;
    cin >> k >> n >> w;

    int x = k;

    for (int i = 0; i < w; i++)
    {
        total += x;
        x = (i + 2) * k;
    }

    if (n > total)
        cout << "0";
    else
        cout << total - n;

    return 0;
}
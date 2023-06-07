/**
 * Link: https://codeforces.com/problemset/problem/467/A
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
    int n, total = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int available, cap;
        cin >> available >> cap;

        if (cap - available > 1)
            total++;
    }

    cout << total;
    return 0;
}
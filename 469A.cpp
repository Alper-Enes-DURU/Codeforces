/**
 * Link: https://codeforces.com/problemset/problem/469/A
 * @author Alper Duru
 */
#include <iostream>
#include <unordered_set>
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
    int totalLevel, p, q;
    cin >> totalLevel >> p;

    unordered_set<int> levelArray;

    for (int i = 0; i < p; i++)
    {
        int levelNo;
        cin >> levelNo;

        if (!levelArray.count(levelNo))
            levelArray.insert(levelNo);
    }

    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int levelNo;
        cin >> levelNo;

        if (!levelArray.count(levelNo))
            levelArray.insert(levelNo);
    }

    if (totalLevel - levelArray.size() == 0)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";

    return 0;
}
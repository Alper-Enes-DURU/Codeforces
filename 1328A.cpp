/**
 * Link: https://codeforces.com/problemset/problem/1328/A
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
    int t;
    cin >> t;

    vector<int> arr;

    for (int i = 0; i < t; i++)
    {
        int a, b;
        cin >> a >> b;

        if (a % b != 0)
            arr.push_back(b - a % b);
        else
            arr.push_back(0);
    }

    for (int i = 0; i < t; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
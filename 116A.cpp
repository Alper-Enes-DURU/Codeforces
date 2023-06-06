/**
 * Link: https://codeforces.com/problemset/problem/116/A
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
    int n, currentCount = 0, maxCount = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int enter_num, exit_num;
        cin >> exit_num >> enter_num;

        currentCount += enter_num - exit_num;

        if (currentCount > maxCount)
            maxCount = currentCount;
    }

    cout << maxCount;
    return 0;
}
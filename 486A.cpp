/**
 * Link: https://codeforces.com/problemset/problem/486/A
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
    long long int n, total = 0;
    cin >> n;

    if (n % 2 == 0)
        total = n / 2;
    else
        total = -n / 2 - 1;

    cout << total;
    return 0;
}
/**
 * Link: https://codeforces.com/problemset/problem/271/A
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
    int y;
    cin >> y;

    bool notUniq = true;

    while (notUniq)
    {
        y++;
        int startYear = y;

        int first = startYear % 10;
        startYear /= 10;
        int second = startYear % 10;
        startYear /= 10;
        int third = startYear % 10;
        startYear /= 10;
        int fourth = startYear % 10;
        startYear /= 10;

        if ((first != second) &&
            (first != third) &&
            (first != fourth) &&
            (second != third) &&
            (second != fourth) &&
            (third != fourth))
        {
            notUniq = false;
        }
    }

    cout << y;
    return 0;
}
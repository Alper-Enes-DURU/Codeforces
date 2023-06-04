/**
 * Link: https://codeforces.com/problemset/problem/339/A
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
    string s, final_s;
    cin >> s;

    int string_length = s.length();
    vector<int> arr;

    for (int i = 0; i < string_length; i++)
    {
        if (s[i] != '+')
            arr.push_back(s[i]);
    }

    sort(arr.begin(), arr.end());

    for (int i = 0; i < arr.size(); i++)
    {
        final_s.push_back(arr[i]);

        if (i != arr.size() - 1)
            final_s.push_back('+');
    }

    cout << final_s;
    return 0;
}
/**
 * Link: https://codeforces.com/problemset/problem/228/A
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
    int remaining = 0, arr[4];
    unordered_set<int> s;
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];

    // Traverse the input array
    for (int i = 0; i < 4; i++)
    {
        // if element is not present then s.count(element) return 0 else return 1
        // hashtable and print it
        if (!s.count(arr[i])) // <--- avg O(1) time
        {
            s.insert(arr[i]);
        }
    }

    cout << 4 - s.size();
    return 0;
}
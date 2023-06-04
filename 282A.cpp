#include <iostream>
using namespace std;

int main()
{
    int n, total = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        if (s == "++X")
            total += 1;
        else if (s == "X++")
            total += 1;
        else if (s == "--X")
            total -= 1;
        else if (s == "X--")
            total -= 1;
    }

    cout << total;
    return 0;
}
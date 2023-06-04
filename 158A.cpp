#include <iostream>
using namespace std;

int main()
{
    int n, k, total = 0, k_value;

    cin >> n >> k;

    int score_array[n];

    for (int i = 0; i < n; i++)
    {
        int score;
        cin >> score;
        score_array[i] = score;

        if (i == k - 1)
            k_value = score;
    }

    for (int i = 0; i < n; i++)
    {
        if (score_array[i] >= k_value && score_array[i] != 0)
            total += 1;
    }

    cout << total;
    return 0;
}
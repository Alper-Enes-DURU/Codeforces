#include <iostream>
using namespace std;

int main()
{
    int num_questions, total = 0;
    cin >> num_questions;

    for (int i = 0; i < num_questions; i++)
    {
        int petya, vasya, tonya;
        cin >> petya >> vasya >> tonya;

        if (petya + vasya + tonya > 1)
            total += 1;
    }

    cout << total;
    return 0;
}
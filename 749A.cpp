#include <iostream>
using namespace std;

int main()
{
    int n;
    int k;
    cin >> n;
    if(n >= 2 && n <= 100000){
        k = n/2;
        cout << k << endl;
        for(int i = 0; i < k - 1 ; i++){
            cout << 2 << " ";
            n = n - 2;
            if (n < 2){
                break;
            }
        }
        cout << n;  
    }
    return 0;
} 

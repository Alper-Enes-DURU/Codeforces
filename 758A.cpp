#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    long long int a;
    long long int x = pow(10,6);
    long long int greatestNumber = 0;
    long long int sum = 0;
    int i = 0;
    cin >> n;
    long long int t[n];
    if (n >= 1 && n <= 100 ){
        while(i < n){
            cin >> a;
            if (a >= 0 && a <= x){
                if(a > greatestNumber){
                    greatestNumber = a;
                }
                t[i] = a;
                i++;
            }
            else 
                break;
        }
        for(int b = 0; b < n; b++){
            sum = sum + (greatestNumber-t[b]);
        }
        cout << sum;
    }
    return 0;
} 

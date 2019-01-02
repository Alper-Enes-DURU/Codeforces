#include<iostream>
using namespace std;

int main()
{
    int n, p;
    double percentSum = 0;
    cin >> n;
    if (n>=1 && n<=100){
        for(int i = 0; i < n; i++){
            cin >> p;
            percentSum += p;
        }
        if(p >= 0 && n <= 100){
            
            cout << percentSum/n;
        }
    }
    return 0;
} 

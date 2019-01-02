#include<iostream>
using namespace std;

int main()
{
    int n,h,t,sum=0;
    cin >> n;
    cin >> h;
    if (n>=1 && n<= 1000 && h<=1000 && h>=1){
        while(n>0){
            cin >> t;
            if(t>=1 && t<=2*h){
                if(t>h){
                    sum = sum+2;
                }
                else{
                    sum = sum+1;
                }
            n--;
            }
            else
                break;
        }
    }
    cout << sum;
    return 0;
} 

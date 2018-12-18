#include <iostream>
using namespace std;
int main(){
    int n;
    int sum = 0;
    int kalan;
    cin >> n;
    
    if (n>=1 && n<=1000000){
        sum = sum + n/5;
        n = n%5;

        sum = sum + n/4;
        n = n %4;

        sum = sum + n/3;
        n = n %3;

        sum = sum + n/2;
        n = n %2;

        sum = sum  + n/1;
        n = n%1;


        cout << sum;
    }
        return 0;
}
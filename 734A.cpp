#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>
#include <stdio.h>
#include <ctype.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string b;
    cin >> b;
    int sumA = 0;
    int sumD = 0;
    //string c  = toupper(b);
    if(b.size() == n){
        for(int i = 0; i < n; i++ ){
            if(b[i] == 'A'){
                sumA += 1;
            }
            else if (b[i] == 'D'){
                sumD += 1;
            }
            else
                break;
        }
    }
    if(sumA > sumD){
        cout << "Anton";
    }
    else if(sumD > sumA){
        cout << "Danik";
    }
    else
        cout << "Friendship";
    return 0;
}

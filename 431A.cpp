#include <iostream>
#include <cstring>
#include <cstdio>
#include <stdio.h>
#include <ctype.h>
#include <cmath>

using namespace std;

int main()
{
    int n;
    string b;
    int arr[4];
    int sum = 0;

    for(int i = 0; i < 4; i++){
        cin >> n;
        arr[i] = n;
    }

    cin >> b;
    
    if(b.size() >= 1 && b.size() <= pow(10,5)){
        for(int k = 0; k < b.size(); k++){
            if(b[k] == '1'){
                sum += arr[0];
            }
            else if(b[k] == '2'){
                sum += arr[1];
            }
            else if(b[k] == '3'){
                sum += arr[2];
            }
            else if(b[k] == '4'){
                sum += arr[3];
            }
            else
               break;
        } 
    }
    cout << sum;
    return 0;
}

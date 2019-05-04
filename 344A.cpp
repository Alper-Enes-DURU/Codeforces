#include <cctype>
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
    string a;
    cin >> n;
    string arr[n];
    int sum = 0;
    
    for(int i = 0; i < n; i++){
        cin >> a;
        arr[i] = a;
    }

    for(int j = 0; j < n; j++){
        if(arr[j] == "10" && arr[j+1] == "01"){
            sum += 1;
        }
        else if(arr[j] == "01" && arr[j+1] == "10"){
            sum += 1;
        }
        else if(n == 1){
            sum += 1;
            break;
        }
        else{
            if(arr[j] != arr[j+1]){
                sum += 1;
                break;
            }
        }
    }

    cout << sum;

    return 0;
}

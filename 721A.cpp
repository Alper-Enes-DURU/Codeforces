#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>
#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <vector>
using namespace std;


int main()
{
    int n;
    cin >> n;
    char s;
    char arr[n];
    int sum = 0;
    int length = 0;
    int z = 0;
    
    for(int i = 0; i < n; i++){
        cin >> s;
        arr[i] = s;
    }

    for(int j = 0; j < n; j++){
        while(arr[j] != arr[j+1]){
            if(arr[j] == 'B'){
                sum += 1;
            }                    
            break;
        }
    }

    int arr2[sum];

    for(int j = 0; j < n; j++){
        if(arr[j] == 'B'){
            length += 1;
            arr2[z] = length; 
            if(arr[j] != arr[j+1]){
                z += 1;
            }
        }
        else{
            length = 0;
            
        }
    }
          
    cout << sum << "\n";
    for(int k = 0; k < sum; k++){
        cout << arr2[k] << " ";
    }
    
    return 0;
}

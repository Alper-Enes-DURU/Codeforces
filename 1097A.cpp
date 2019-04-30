#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>
#include <stdio.h>
#include <ctype.h>

using namespace std;

int main()
{
    char a, b;
    char first[1][2];
    int sum = 0;
    for(int k = 0; k < 2; k++){
        cin >> a;
        first[0][k] = a;
    }

    char arr[5][2];
    for(int i =0; i < 5; i++){
        for(int j = 0; j < 2; j++){
            cin >> b;
            arr[i][j] = b;
        }
    }
    
    for(int i =0; i < 5; i++){
        for(int j = 0; j < 2; j++){
            if(arr[i][j] == first[0][0] || arr[i][j] == first[0][1]){
                sum += 1;
                break;
            }

        }
    }

    if(sum >= 1)
        cout << "YES";
    else
        cout << "NO";
    
    return 0;
}

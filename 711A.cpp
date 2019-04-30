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
    char b;
    char arr[n][5];
    int sum = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 5; j++){
            cin >> b;
            arr[i][j] = b;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 4; j++){
            if(arr[i][j] == 'O' && arr[i][j+1] == 'O'){
                sum += 1;
                arr[i][j] = '+';
                arr[i][j+1] = '+';
                break;
            }     
        }
        if(sum >= 1){
            break;
        }
    }

    if(sum >= 1){
        cout << "YES" << "\n";
        for(int i = 0; i < n; i++){
            for(int j = 0; j < 5; j++){
                cout << arr[i][j];
            }
            cout << "\n";
        }
    }
    else{
        cout << "NO";
    }
    
    return 0;
}

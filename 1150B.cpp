#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main()
{
    int n;
    char b;
    int sum = 0;
    cin >> n;
    char arr[n][n];
if(n >= 3 && n <= 50){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> b;
            arr[i][j] = b;
        }
    }
    for(int i = 1; i < (n-1); i++){
        for(int j = 1; j < (n-1); j++){
            if(arr[i][j] == '.' && arr[i+1][j] == '.' && arr[i-1][j] == '.' && arr[i][j+1] == '.' && arr[i][j-1] == '.'){
                arr[i][j] = '#'; 
                arr[i+1][j] = '#'; 
                arr[i-1][j] = '#'; 
                arr[i][j+1] = '#'; 
                arr[i][j-1] = '#';
            }
        }
    }
    for(int i = 1; i < (n-1); i++){
        for(int j = 1; j < (n-1); j++){
            if(arr[i][j] != '#' || arr[i+1][j] != '#' || arr[i-1][j] != '#' || arr[i][j+1] != '#' || arr[i][j-1] != '#' || arr[0][0] != '#' || arr[n-1][n-1] != '#' || arr[n-1][0] != '#' || arr[0][n-1] != '#'){
                sum = sum + 1;
            }
        }    
    }
    if(sum >=1){
        cout << "NO";
    }
    else{
        cout << "YES";
    }
}
    return 0;
}

#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int main()
{
    int n;
    char c;
    int stof = 0;
    int ftos = 0;
    cin >> n;
    char arr[n];

    for(int i = 0; i < n; i++){
        cin >> c;
        arr[i] = toupper(c);
    }

    for(int i = 0; i < (n-1); i++){
        if(arr[i] == 'S' && arr[i+1] == 'F'){
            stof += 1; 
        }
        else if(arr[i] == 'F' && arr[i+1] == 'S'){
            ftos += 1;
        }
        else 
            continue;
    }
    
    if(stof > ftos){
        cout << "YES";
    }
    else 
        cout << "NO";
    
    return 0;
}
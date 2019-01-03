#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int t[n][n];
    
    if (n >= 1 && n <= 10){
        
        for(int y = 0; y<n; y++){
            t[0][y] = 1;
            t[y][0]=1;
        }

        for(int i = 1 ; i < n; i++){
            for(int j = 1; j < n; j++){
                t[i][j] = t[i-1][j] + t[i][j-1];
            }
        }

        cout << t[n-1][n-1];

    }
    return 0;
} 

#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main()
{
    int n, m, r, s, b, x, lastR, resultR;
    cin >> n;
    cin >> m;
    cin >> r;
    //int arrn[n];
    //int arrm[m];
    int minNumberForN = 1001;
    int maxNumberForM = 0;
    for(int i =0; i < n; i++){
        cin >> s;
        //arrn[i] = s;
        if(s < minNumberForN){
            minNumberForN = s;
        }
    }
    for(int j = 0; j < m; j++){
        cin >> b;
        //arrm[j] = b;
        if(b > maxNumberForM){
            maxNumberForM = b;
        }
    }
    if(minNumberForN >= maxNumberForM ){
        cout << r;
    }
    else{
        for(x = 0; x < 10000; x++){
            if(x*minNumberForN > r){
                x = x-1;
                break;
            }
        }
        lastR = x*maxNumberForM - x*minNumberForN;
        resultR = r + lastR;
        cout << resultR;
    }
    return 0;
}

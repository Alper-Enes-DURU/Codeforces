#include<iostream>
using namespace std;

int main()
{
    int r, b, different = 0, same = 0;
    cin >> r;
    cin >> b;
    if (r >= 1 && r <= 100 && b >= 1 && b <= 100){
        while(r >= 0 && b >= 0){
            if ( r != 0 && b != 0){
                different = different + 1;
            }
            else {
                same = same + r/2 ;
                same = same + b/2 ;

            }
            r--;
            b--;
        }
        cout << different << " ";
        cout << same;
    }
    return 0;
} 

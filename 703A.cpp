#include <iostream>
using namespace std;

int main()
{
    int n;
    int m, c;
    int i = 0;
    int addM = 0;
    int addC = 0;
    int addEqual = 0;
    cin >> n;
    if (n >= 1 && n <= 100){
        while(i<n){
            cin >> m;
            cin >> c;
            if (m > c){
                addM = addM + 1;
            }
            else if (c > m){
                addC = addC + 1;
            }
            else 
                addEqual = addEqual + 1;
            i++;
        }
        if (m >= 1 && m <= 6){
            if(addM > addC){
                cout << "Mishka";
            }
            else if (addC > addM){
                cout << "Chris";
            }
            else
                cout << "Friendship is magic!^^";
        }  
    }
    return 0;
} 

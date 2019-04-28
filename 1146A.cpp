#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main()
{
    string n;
    cin >> n;
    int sum = 0;
       
    for(int i = 0; i < n.size(); i++){
        if(n[i] == 'a'){
            sum += 1;
        }
    }
    
    if(sum > n.size()/2){
        cout << n.size();
    }
    else{
        cout << 2*(sum)-1;
    }

    return 0;
}

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
    string s;
    cin >> s;
    string arr[n];
 
    if(s.size() == n){
    	for(int i = 0; i < n; i++){
    		int a = i*(i+1)/2;
    		if(s[a] == s[a + 1] && i > 0){
    			arr[i] = s[a];
    		}
    		else if(i == 0){
    			arr[i] = s[a];
    		}
    	}
		
		int b = (sqrt(8*n+1) - 1)/2;
    	for(int z = 0; z < b; z++){
    		cout << arr[z];
    	}
    }
    return 0;
}

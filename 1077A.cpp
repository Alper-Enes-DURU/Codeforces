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
    long long int t, a, b, k;
    cin >> t;
    long long int arr[t];
   	long long int result = 0;

    for(int j = 0; j < t; j++){
    	cin >> a; 
    	cin >> b;
    	cin >> k; 	

    	if(k%2 == 0){
    		arr[j] = (a-b)*(k/2);
    	} 	    
    	else{
    		arr[j] = a + (a-b)*(k/2);
    	}	
    }

    for(int p = 0; p < t; p++){
    	cout << arr[p] << "\n";
    }

    return 0;
}

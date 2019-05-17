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
    int n, a;
    cin >> n;
    int arr[n];
    int arr2[n];
    int sum = 0;
    int greatestNumber = 1;

    for(int i = 0; i < n; i++){
    	cin >> a;
    	arr[i] = a;
    }
    
    for(int k = 0; k < n; k++){
    	for(int l = 0; l < n; l++){
    		if(arr[k] == arr[l]){
    			sum += 1;
    		}
    	}
    	arr2[k] = sum;
    	sum = 0;
    }

    for(int z = 0; z < n; z++){
    	if(arr2[z] > greatestNumber){
    		greatestNumber = arr2[z];
    	}
    }

    cout << greatestNumber;
    return 0;
}

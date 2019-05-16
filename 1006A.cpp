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
    for(int i = 0; i < n; i++){
    	cin >> a;
    	if(a % 2 == 0){
    		a = a - 1;
    	}
    	arr[i] = a;
    }
    for(int j = 0; j < n; j++){
    	cout << arr[j] << " ";
    }
    return 0;
}

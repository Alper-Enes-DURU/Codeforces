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
    int s, v1, v2, t1,t2;
    cin >> s >> v1 >> v2 >> t1 >> t2;
    int sum1 = s*v1 + 2*t1;
    int sum2 = s*v2 + 2*t2;
    if(sum2 > sum1){
    	cout << "First";
    }
    else if(sum1 > sum2){
    	cout << "Second";
    }
    else{
    	cout << "Friendship";
    }
    return 0;
}

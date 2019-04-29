#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main()
{
   int n, x;
   cin >> n;
   int arr[n];
   int arr2[n];

   for(int i = 0; i < n; i++){
        cin >> x;
        arr[i] = x;
        arr2[x-1]= i+1;
   }
  
   for(int j = 0; j < n; j++){
        cout << arr2[j] << " ";
   }
   
    return 0;
}

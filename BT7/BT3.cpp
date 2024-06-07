#include <bits/stdc++.h>
using namespace std;

//Bai 3
int chan ( int *a , int n){
    for( int i =0; i< n; i++){
        if( a[i]%2==0){
            cout << a[i]<< " ";
        }
    }
    return 0;
}
int main (){


// Bai 3
int n;
cin >> n;
int a[n];
for( int i =0; i< n; i++){
   cin >> a[i];
}
cout << chan(a,n);



return 0;}

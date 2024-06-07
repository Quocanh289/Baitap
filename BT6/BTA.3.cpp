#include <bits/stdc++.h>
using namespace std;

void bien(int x){
    x = x+1;

}

void  bien1 ( int& x){

 x = x+1;

}

int main (){


//Bai 3
   int n;
   cin >>n;
   bien(n);
   cout <<&n; // van in ra diachi 4
   bien1(n);
   cout << &n; // in ra dia chi 5




return 0;}

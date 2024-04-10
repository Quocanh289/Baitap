#include <bits/stdc++.h>
using namespace std;
//void fact(int n){
//    int s=1;
//    for ( int i =1; i<=n; i++){
//        s = s*i;
//    }
//    cout << "x = " << n << " at " << &n;
//
//
//}

void bien(int x){
    x = x+1;

}

void  bien1 ( int& x){

 x = x+1;

}
void f(int xval)
{
   int x;
   x = xval;
  cout << &x;
}
void g(int yval)
{
   int y;
   // in địa chỉ của y tại đây
   cout << &y;
}
int main (){
//Bai 1:
//  int n;
//    cin >>n;
//
//    int a[n];
//    char b[n];
//    int x,y,z;
//    cout << a[0]<<a[1]<< a[2];
//    cout << b[0]<<b[1] << b[2];
// in ra man hinh mot gia tri lay tu bo nho ( no tuong tu khi khai bao x,y,z truoc va sau

 //Bai 2:
//        int n;
//        cin >>n;
//         fact(n);

//Bai 3
//   int n;
//   cin >>n;
//   bien(n);
//   cout <<&n; // van in ra diachi 4
//   bien1(n);
//   cout << &n; // in ra dia chi 5

//Bai 4:
// pass by reference
// pass by reference

//Bai 5:
//a, 1 bien
//b, Khong vi bien tham chieu khong co bo nho
//c, Khong vi bien tham chieu tro den dau thi nhan bo nho cua bien nay

//Bai 6:
//   f(7);
//   g(11);
// => Ham in ra dia chi giong nhau => Vi bo nho cap phat dia chi giong nhau cho 2 bien



return 0;}

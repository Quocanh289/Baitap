#include <iostream>
using namespace std;
struct Rect {
    int x, y,z,t ;


};
void nhap( Rect p){
 cin >> p.x >> p.y >> p.z >> p.t;}
bool  contains ( const Rect point ){
       Rect sum;
       nhap(sum );
       if( (point.x > sum.x) && (point.x< (sum.x + sum.z))&& (point.y > sum.y-sum.t) && (point.y < sum.y )){
          return true;}
          else return false;
}



int main ()
{
    Rect hinh;
    cin >> hinh.x >> hinh.y>> hinh.z>> hinh.t;
    bool p = contains ( hinh );
    cout << p;

  return 0;
}


#include <iostream>
using namespace std;
struct Point {
    int x, y;
};
void print (Point p) // khi dung ham khong can khai bao bien
{
    cout << p.x << p.y;
}
void tong ( Point p)
{
  p.x = p.x + p.y;
}
void hieu ( Point &p)
{
p.x = p.x - p.y;
}
int main ()
{
  Point point;
  point.x = 10;
  point.y =12;
  tong (point);
  print (point);
 hieu(point);
 print(point);
  return 0;
}
//=> Khi truyen tham chieu vao thi no tuong tu nhu truyen 1 bien

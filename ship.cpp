#include <iostream>
using namespace std;
struct Ship {
   int toado, kichthuoc;
   string id;
   int dx,dy;
   int x,y;
   void move(){
       Ship p;
   p.x += p.dx;
   p.y += p.dy;
    }

};
void nhap (Ship tau){
cin >> tau.toado >> tau.kichthuoc >> tau.id>>tau.dx>>tau.dy;}
void display (const Ship & ship){
    cout << ship.id << ship.toado;
}

int main ()
{
    Ship p1,p2,p3,p4,p5;
    nhap(p1);
    nhap(p2);
    //nhap(p3);
    //nhap(p4);
    //nhap(p5);


        p1.move();
        p2.move();
        display ( p1);
        display (p2);


    return 0;
}

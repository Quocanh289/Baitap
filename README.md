Cau 2:
 int* p = new int;
 int* p2 = p;
 *p = 10;
 delete p; 
*p2 = 100;
 cout << *p2;
 delete p2;
=>  free() : double free detected in tcache 2
=> vì đã xóa bộ nhớ của p đồng nghĩa xóa p2 nên xóa lần nữa thì lỗi giải phóng 
Cau 3 :


#include "vector.cpp"

using namespace std;
int main()
{
 double r1, r2, multy, number, length;
 int select = 0;
 vector v1;
 vector v2;

 print_menu(select);
 cin >> select;
 switch (select)
 {
 case 1:
     {
  cout << "Enter the vector's cooridnates x1 y1 x2 y2" << endl;
  cin >> v1.x >> v1.y >> v2.x >> v2.y;
  r1 = sum(v1.x, v2.x);
  r2 = sum(v1.y, v2.y);
  toString(r1, r2);
  break;
     }
 case 2:
     {
  cout << "Enter the vector's cooridnates x1 y1 x2 y2" << endl;
  cin >> v1.x >> v1.y >> v2.x >> v2.y;
  r1 = substraction(v1.x, v2.x);
  r2 = substraction(v1.y, v2.y);
  toString(r1, r2);
  break;
     }
 case 3:
     {
  cout << "Enter the vector's cooridnates x1 y1 x2 y2" << endl;
  cin >> v1.x >> v1.y >> v2.x >> v2.y;
  multy = v1.x * v2.x + v1.y * v2.y;
  cout << "Multiplication = " << multy << endl;
  break;
     }
 case 4:
     {
  cout << "Enter the vector x1 y1" << endl;
  cin >> v1.x >> v1.y;
  length = sqrt(v1.x*v1.x + v1.y*v1.y);
  cout << "Length is " << length << endl;
  break;
     }
 case 5:
     {
  cout << "Enter the vector's coordinates x1 y1" << endl;
  cin >> v1.x >> v1.y;
  cout << "Enter the number" << endl;
  cin >> number;
  r1 = multiply(number, v1.x);
  r2 = multiply(number, v1.y);
  toString(r1, r2);
  break;
     }
 default:
  print_error();
  break;
  }
}

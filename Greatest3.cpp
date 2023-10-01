#include<iostream.h>
#include<conio.h>
void main()
{
  int a,b,c;
  clrscr();   
  cout<<"Enter first number: ";
  cin>>a;
  cout<<"Enter second number: ";
  cin>>b;
  cout<<"Enter third number: ";
  cin>>c;
 if (a >= b && a >= c) {
        cout << a << " is the greatest.";
    } else if (b >= a && num2 >= num3) {
        cout << b << " is the greatest.";
    } else {
        cout << c << " is the greatest.";
    }
  getch();
}

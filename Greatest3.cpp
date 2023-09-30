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
  if a>b:
    if a>c:
      cout<<"The greater number is: "<<a;
    else:
      cout<<"The greater number is: "<<c;
  else:
    if b>c:
      cout<<"The greater number is: "<<b;
    else:
      cout<<"The greater number is: "<<c;
  getch();
}

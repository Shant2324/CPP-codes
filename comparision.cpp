#include<iostream.h>
#include<conio.h>
void main()
{
  int a,b;
  clrscr();
  cout<<"Enter first number: ";
  cin>>a;
  cout<<"Enter second number: ";
  cin>>b;
  if(a>b)
  {
    cout<<"First number is greater";
  }
  else if(b>a)
  {
    cout<<"Second number is greater";
  }
  else
  {
    cout<<"Both numbers are equal";
  }
  getch(); 
}

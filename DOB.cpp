#include<iostream>
using namespace std;
int main()
{
  int CrntYr,BrtYr,Age;
  cout<<"Enter the current Year: ";
  cin>>CrntYr;
  cout<<"Enter your age: ";
  cin>>Age;
  BrtYr=CrntYr-Age;
  cout<<"You was born in Year: "<<BrtYr;
  return 0;
}

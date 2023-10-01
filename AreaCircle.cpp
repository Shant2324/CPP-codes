#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  float r,A;
  cout<<"Enter the radius of the circle: ";
  cin>>r;
  if (r < 0) {
    cout << "Error: Radius cannot be negative." << endl;
  } 
  else {
    A=M_PI*r*r;
    cout<<"Area of the circle is: "<<A;
  }
  return 0;
}

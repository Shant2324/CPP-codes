#include <iostream>
using namespace std;
class  New1{
  private:
    double length;
  public:
    New1() {
      length = 5.5;
      cout<<"This is from constructor"<<endl;
      cout << "Creating a door." << endl;
      cout << "Length = " << length << endl;
    }
};

int main() {
  New1 new2;
  return 0;
}

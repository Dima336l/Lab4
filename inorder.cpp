#include <iostream>

using namespace std;

int main() {
  cout << "Enter three integers: ";
  int a,b,c;
  cin >> a >> b >> c;
  if ( ((a >= b) && ( b >= c)) || ( (a <= b) && (b <= c)))
    cout << "In order" << endl;
  else
    cout << "Not in order" <<endl;
}

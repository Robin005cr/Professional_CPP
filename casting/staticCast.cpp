#include <iostream>
using namespace std;

int main() {

  double num = 3.7 * 5.5;
  cout << "Before using static_cast: num = " << num << endl;

  int cast_var;

  cast_var = static_cast <int> (num);

  cout << "After using static_cast: cast_var = " << cast_var;

  return 0;
}
#include <iostream>
#include "math.h"


int main(){
  using namespace std;  
  int x,y,res = 0;
  cout << "add the two numbers\n" << endl;
  cin >> x;
  cin >> y;
  res = Add(x,y);
  cout << res << endl;
  return 0;  
}

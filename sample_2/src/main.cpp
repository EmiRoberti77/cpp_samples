#include <iostream>

void print(int val);

int main(){
  //value initialization
  int valueInt = int();

  //directtion initialization
  int directInt(23);

  //copy initializarion
  int copyInt = 12;

  print(valueInt);
  print(directInt);
  print(copyInt);
  return 0;
}

void print(int val){
  using namespace std;
  cout << val << endl;
}
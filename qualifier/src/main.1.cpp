#include <iostream>
int main(){
  using namespace std;
  const float PI = 3.14f;
  float radius;
  cout << "print radius value?=";
  cin >> radius;
  
  if(radius > 1 && radius < 10){
    float area = PI * radius * radius;
    cout << "area=" << area << endl;
  } else {
    cout << "value must be from 1 to 10" << endl;
  }

  return 0;
}
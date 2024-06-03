#include <iostream>

const int ZERO(0);

void Add(int *a, int *b, int *res){
  *res = *a + *b;
}

void Add(float *a, float *b, float *res){
  *res = *a + *b;
}

int main(){
  using namespace std;
  int a = 10;
  int b = 7;
  int res = 0;
  float f = 10.34f;
  float e = 7.34f;
  float res2 = 0.0f;

  Add(&a, &b, &res);
  cout << res << endl;
  Add(&f, &e, &res2);
  cout << res2 << endl;
  return ZERO;
}
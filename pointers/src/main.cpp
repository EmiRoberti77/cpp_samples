#include <iostream>
using namespace std;
int Add(int *a, int *b);
void AddVal(int *a, int *b, int *result);
void Swap(int *a, int *b);

int main(){

  int a(10);  
  int b(5);
  int result(0);
  //add
  cout << "Add=" << Add(&a, &b) << endl;
  //addVal
  AddVal(&a, &b, &result);
  cout << "addVal="<< result << endl;
  //swap
  Swap(&a, &b);
  cout << "Swap a="<< a << " b="<< b << endl;
  
  return 0;
}

int Add(int *a, int *b){
  return *a + *b;
}

void AddVal(int *a, int *b, int *result){
  *result = *a + *b;
}

void Swap(int *a, int *b){
  int temp = *b;
  *b = *a;
  *a = temp;
}
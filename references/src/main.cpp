#include <iostream>

void Add(int a, int b, int &result);
void Factorial(int a, int &result);
void Swap(int &a, int &b);
void SwapByPointer(int *a, int *b);
void PrintByPointer(int *ptr);
void PrintByRef(int &ptr);

int main(){
  using namespace std;
  //referent
  int x = 10;
  //reference
  int &ref = x;
  cout << x << ',' << ref << endl;
  cout << &x << ',' << &ref << endl;

  int a = 5;
  int b = 10;
  int total = 0;
  Add(a,b,total);
  cout << "a+b=" << total << endl; 
  Factorial(a,total);
  cout << "a*a=" << total << endl; 
  Swap(a,b);
  cout << "a=" << a << ",b=" << b << endl; 
  SwapByPointer(&a,&b);
  cout << "a=" << a << ",b=" << b << endl; 
  PrintByPointer(&a);
  PrintByRef(a);
  return 0;
}

void Add(int a, int b, int &result){
  result = a + b;
}

void Factorial(int a, int &result){
  result = a*a;
}

void Swap(int &a, int &b){
  int temp = a;
  a = b;
  b = temp;
}

void SwapByPointer(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

void PrintByPointer(int *ptr){
  using namespace std;
  if(ptr != nullptr){
    cout << "PrintByPointer=" << *ptr << endl;
  }
};
void PrintByRef(int &ptr){
  using namespace std;
  cout << "PrintByRef=" << ptr << endl;
};


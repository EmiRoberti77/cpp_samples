#include <iostream>
void Print(const int *ptr);
void Print(const int &ref);
void Example1();
void Example2();
void Example3();

int main(){
  using namespace std;
  const int CHUNK_SIZE = 512;
  const int *ptr = &CHUNK_SIZE;
  int x = 10; 
  Print(&x);
  Print(x);
  Example3();
  return 0;
}

void Print(const int *ptr){
  using namespace std;
  cout << *ptr << endl;
  cout << ptr << endl;
}

void Print(const int &ref){
  using namespace std;
  cout << ref << endl;
  int a = 10;
}

void Example1(){
  int x = 5;
  const int MAX = 12;
  int &ref_x1 = x;
  const int &ref_x2 = x;
  ref_x1 = MAX;
  // ref_x2 = x; ( this line would fail)
}
void Example2(){
  int x = 5;
  const int *ptr = &x;
  int *const ptr2 = &x;
}
void Example3(){
  using namespace std;
  int *ptr;
  cout << "ptr=>"<< ptr << endl;
  int a = 12;
  ptr = &a;
  cout << "ptr=>"<< ptr << ",&a=" << &a << endl;
  cout << "*ptr=>"<< *ptr << ",a=" << a << endl;
  int b = 24;
  ptr = &b;  
  cout << "ptr=>"<< ptr << ",&b=" << &b << endl;
  cout << "*ptr=>"<< *ptr << ",b=" << b << endl;
}
#include <iostream>

using namespace std;
void print(int val);

class MyClass {
  public:
    int value;

  MyClass(){
    cout << "init MyClass 0 value" << endl;
  };
  MyClass(int val): value(val){
    cout << "init MyClass " << val << endl;     
  }

  void doSomething(){
    cout << value << endl;
  }
};

int main(){
  //value initialization
  int valueInt = int();

  //direction initialization
  int directInt(23);

  //copy initialization
  int copyInt = 12;

  print(valueInt);
  print(directInt);
  print(copyInt);

  MyClass myClassCopyInit = MyClass();
  MyClass myClassDirectionInit(12);
  MyClass mClassCopyInit = myClassDirectionInit; 
  myClassCopyInit.doSomething();
  myClassDirectionInit.doSomething();
  
  return 0;
}

void print(int val){
  cout << val << endl;
}
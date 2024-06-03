#include <iostream>

const int ZERO = 0;

int main(){
  using namespace std;
    using namespace std;
    
    int arr[] = {1,2,3,4,5,6,7};
    
    for(auto x: arr){
        cout << x << ",";
    }
    
    cout << endl;
    
    for(const int &x: arr){
        cout << x << ",";
    }
    
    cout << endl;
    
    for(int &x: arr){
        x=12l;
        cout << x << ",";
    }

    cout << endl;
    
    //this is what a range based loop in doing in the back ground
    auto range = arr;
    auto begin = std::begin(arr);
    auto end = std::end(arr);

    for(;begin != end; ++begin){
      auto v = *begin;
      cout << "V" << v << ",";
    }

    cout << endl;
   
  return ZERO;
}
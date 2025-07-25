#include<iostream>
using namespace std;

int main() {
      float value = 12.5;
      float* p =&value;
      cout<<"enter a float value :"<< *p << endl;
    return 0;
}
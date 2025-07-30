#include<iostream>
using namespace std;

int main() {
       int a =5 , b= 7;
       auto sum  = [=] () { cout<< a+b << endl;};
       sum();
    return 0;
}
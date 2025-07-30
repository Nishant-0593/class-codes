#include<iostream>
using namespace std;
int main(){
    int a = 5, b = 7;
    auto sum = [=](){cout << a + b << endl;}; 
    sum();
    int count = 0;
    auto inc = [&](){count++;};
    inc();
    cout << count << endl;
}

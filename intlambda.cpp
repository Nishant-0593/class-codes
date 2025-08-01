#include<iostream>
using namespace std;
int main(){
    int sum = 100;
    auto add = [=](){cout << sum << endl;}; 
    int count = 0;
    auto inc = [&](){count++;};
    inc();
    add();
    cout << count << endl; 
}
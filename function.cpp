#include<iostream>
#include<functional>
using namespace std;
void runTwice(function<void()> func){
    func();
    func();
}
int main() {
    auto greet = [](){cout<<6<<endl;};
    runTwice(greet);  
    return 0;
}
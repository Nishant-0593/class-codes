#include<iostream>
#include<memory>
using namespace std;

int main() {
        unique_ptr<int> p1(new int(72));
        cout << "Number: " << *p1 << std::endl;
    return 0;
}
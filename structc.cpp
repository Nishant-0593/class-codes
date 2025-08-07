#include<iostream>
using namespace std;
class circle {
    public:
    double radius;
};
int main() {
    circle*c= new circle;
    c->radius=4.2;
    cout<< "Radius" <<c->radius;
    delete c;
    return 0;
}
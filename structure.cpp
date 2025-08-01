#include<iostream>
using namespace std;
struct point{
    int x;
    int y;
};

int main() {
       point p;
       p.x = 2;
       p.y = 4;
       cout<<p.x<<","<<p.y<<endl;
    return 0;
}
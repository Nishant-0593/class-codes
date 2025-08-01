#include<iostream>
using namespace std;
struct Point{
    int x,y;
};
int add(int x,int y){
    return x + y;
}
int sub(int x,int y){
    return x - y;
}
int mul(int x,int y){
    return x * y;
}
float divi(int x,int y){
    return x / y;
};
int main(){
    Point p;
    p.x = 3;
    p.y = 4;
    cout << "Addition:" << add(p.x,p.y) << endl;
    cout << "Difference:" << sub(p.x,p.y) << endl;
    cout << "Multiplication:" << mul(p.x,p.y) << endl;
    cout << "Division:" << divi(p.x,p.y) << endl;
    return 0;
}
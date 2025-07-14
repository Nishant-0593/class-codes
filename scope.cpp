#include<iostream>
using namespace std;
int globals=11;
void demo(){
    int locals = 25;
    cout<<"value of local in this is :"<<locals<<endl;
    cout<<"value of globals varriable is :"<<globals<<endl;

}

int main(){
    int locals=30;
    cout<<"value of globals varriable :"<<globals<<endl;
}
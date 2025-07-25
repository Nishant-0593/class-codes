#include<iostream>
using namespace std;

void addOne(int* p){
     (*p)++;
}
int main() {
    int score = 95;
    addOne(&score);//this is for function call
    // int* p = &score;
    cout<<" value of score :"<< score << endl;
    // cout<<"Address of score is :"<< &score << endl;
    // cout<<"pointer helps :"<< p << endl;
    // cout<<"value through pointer :"<< *p << endl;
    return 0;
}




#include<iostream>
using namespace std;

int main() {
    int num;
    int sum;
    cout<<"enter a number :";
    cin>>num;
    for(int i=1;i<=num;i++){
        if(num % i==0){
        sum+=i;
        }
    }
    if(sum==num){
        cout<<"it is a perfect number";
    }
    else{
        cout<< num <<"chati nhi ha ye ";
    }
    return 0;
}
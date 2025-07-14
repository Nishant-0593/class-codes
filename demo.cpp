#include<iostream>
#include<climits>
using namespace std;
int main(){
int age = 21;  

    short int smallNum = 32767;   
    long int bigNum = 1000000;    
    unsigned int points = 500;    
    float pi = 3.14f;             
    double gravity = 9.80665; 
    
    cout<<"size of integer datatype is : "<<sizeof(age)<<endl;
    cout<<"size of short int  datatype is : "<<sizeof(smallNum)<<endl;
    cout<<"size of  long int datatype is : "<<sizeof(bigNum)<<endl;
    cout<<"size of  unsigned int datatype is : "<<sizeof(points)<<endl;
    cout<<"size of float datatype is : "<<sizeof(pi)<<endl;  
    cout<<"size of double datatype is : "<<sizeof(gravity)<<endl;
    cout<<INT_MAX;
    cout<<INT_MIN; 
    return 0;
}
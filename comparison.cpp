#include <iostream>
using namespace std;
int main() {
    int n1,n2,n3;
    cout<<"enter three numbers :";
    cin>>n1>>n2>>n3;
int largest = n1;
    if(n2 > largest) largest =n2;
    if(n3 > largest) largest =n3;
int smallest = n1;
    if (n2 < smallest) smallest = n2;
    if (n3 < smallest) smallest = n3;
cout<<"largest number:"<<largest<<endl;
cout<<"shortest number :"<<smallest<<endl;
    if(n1> n2) swap(n1, n2);
    if(n2> n3) swap(n1, n3);
    if(n2> n3) swap(n2, n3);
cout << "Ascending order: " << n1 << " " << n2 << " " << n3 << endl;
    if (n1 < n2) swap(n1, n2);
    if (n1 < n3) swap(n1, n3);
    if (n2 < n3) swap(n2, n3);
cout << "Descending order: " << n1 << " " << n2 << " " << n3 << endl;

    return 0;
}
  
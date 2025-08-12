#include <iostream>
using namespace std;
class Person {
public:
    void introduce() {
        cout << "Hi, my name is pushkar" << endl;
 }
};
class Student : public Person {
public:
    void study() {cout << "pushkar sevice center" << endl;
}
};
int main() {
    Student s;
    s.introduce();  
    s.study();      

    return 0;
}
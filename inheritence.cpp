#include<iostream>
using namespace std;
class Vehicle{
    public: 
    void start(){
        cout << "Vehicle started" << endl;
    }
};
class car : public Vehicle{
    public:
    void honk(){
        cout << "car honking" << endl;
    }
};
class music : public car{
    public:
    void play(){
        cout << "Playing singha ki lockdown ch machiyan faad da cii";
    }
};
int main(){
    music mycar;
    mycar.start();
    mycar.honk();
    mycar.play();
    return 0;
}
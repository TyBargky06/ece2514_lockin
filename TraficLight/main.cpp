#include <iostream>
#include <thread>
#include <chrono>
using namespace std;
enum class States { GREEN, YELLOW, RED };
int main(){
    States state{States::GREEN};
    int timer{10};
    while(true){
        switch(state){
        case States::GREEN:
            if(timer>=1){
                cout<<"GREEN: "<<timer<<" seconds remaining"<<endl;
                timer--;
                this_thread::sleep_for(chrono::seconds(1));
            }
            else{
                state=States::YELLOW;
                timer=3;
            }
            break;
        case States::YELLOW:
            if(timer>=1){
                cout<<"YELLOW: "<<timer<<" seconds remaining"<<endl;
                timer--;
                this_thread::sleep_for(chrono::seconds(1));
            }
            else{
                state=States::RED;
                timer=7;
            }
            break;
        case States::RED:
            if(timer>=1){
                cout<<"RED: "<<timer<<" seconds remaining"<<endl;
                timer--;
                this_thread::sleep_for(chrono::seconds(1));
            }
            else{
                state=States::GREEN;
                timer=10;
            }
            break;
        default:
            cout<<"Error: unknown state"<<endl;
            return 1;
        }
    }
    return 0;
}
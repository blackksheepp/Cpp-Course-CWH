#include <iostream>
using namespace std;

class Dog
{
    public:
        void locomotion(void){
            cout<<"I can move bish!"<<endl;
        }

        void grow(void){
            cout<<"Grow? Complain Pita hu vro, Grow kaise nhi hunga..."<<endl;
        }

        void die(void){
            cout<<"Death is inevitable."<<endl;
        }
};

class Man
{
    public:
        void work(void){
            cout<<"Work more like Majdoori ;_;"<<endl;
        }

        void social(void){
            cout<<"We live in society..."<<endl;
        }

        void dard(void){
            cout<<"Wo chhor ke chali gayi vro, bohot dard hai jindagi me"<<endl;
        }
};

class DogMan : public Dog, public Man
{
    public:
        void isReal(void){
            cout<<"I'm real bitch!"<<endl;
        }

        void canBite(void){
            cout<<"Don't mind if I do..."<<endl;
        }

        void woof(void){
            cout<<"*Woofs"<<endl;
        }
};

int main(){
    
    DogMan doggo;
    
    doggo.locomotion();
    doggo.dard();
    doggo.canBite();

    return 0;
}
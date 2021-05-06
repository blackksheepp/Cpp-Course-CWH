#include <iostream>
using namespace std;

int constant = 10;

class Number
{
    int num;
    public:
    
        Number(){
            cout<<"Constructor Called"<<endl;
            constant = 10;
        }

        ~Number(){
            cout<<"Destructor Called"<<endl;
            constant = 0;
        }

        void setNum(int a){
            num = a;
        }
};

int main(){
    
    {
        Number n1;
        cout<<"The Constant is "<<constant<<"."<<endl;
        n1.setNum(14);
    }
    cout<<"The Constant is "<<constant<<"."<<endl;

    return 0;
}
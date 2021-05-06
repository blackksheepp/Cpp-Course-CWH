#include <iostream>
using namespace std;

class Bank
{   
    int principal, time;
    float rate, interest, amount = 100; 
    public:
        char const* name;
        
        Bank(){}
        Bank(char const* n, int p, int r, int t){
            name = n;
            principal = p;
            rate = float(r)/100;
            time = t;
            SimpleInterest();
        }
        Bank(char const* n, int p, float r, int t){
            name = n;
            principal = p;
            rate = r;
            time = t;
            SimpleInterest();
        }
        
        // Bank(Bank &obj){
        //     name = obj.name;
        // }

        void SimpleInterest(void){
            interest = (principal*rate*time);
            amount = principal + interest;
        }

        void Show(void){
            cout<<"-------------------"<<endl
            <<name<<"'s Account"<<endl
            <<"Principal: "<<principal<<endl
            <<"Rate: "<<rate<<endl
            <<"Time: "<<time<<endl
            <<"Interest: "<<interest<<endl
            <<"Amount: "<<amount<<endl
            <<"-------------------"<<endl;
        }

};

int main(){

    Bank Harry("Harry Potter",100,4,1);
    Harry.Show();

    Bank Rohan(Harry);
    cout<<"Name: "<<Rohan.name<<endl;
    return 0;
}
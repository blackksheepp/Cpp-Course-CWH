#include <iostream>
#include <string>
using namespace std;

//* Prototype Functions
void print(string);
string input(string);

int sum(int a,int b){
    return a+b;
}

int main(){
    
    int num1;
    int num2;
    
    cout<<"Enter the First Number: "; cin>>num1;
    cout<<"Enter the Second Number: "; cin>>num2;
    cout<<"The Sum is: "<<sum(num1,num2)<<endl;

    cout<<"The Sum is: "<<sum(100,20)<<endl;

    print("Hello");
    print("What are you doing?");

    string mystr;
    mystr = input("What is your Number: ");
    cout<<"Your Number is: "<<mystr<<endl;



    return 0;
}

void print(string str){
    cout<<str<<'\n';
}

string input(string str){
    string inp;
    
    cout<<str; 
    cin.ignore();
    getline(cin,inp);

    return inp;    
}
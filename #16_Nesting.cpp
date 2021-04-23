#include <iostream>
#include <string>
using namespace std;

class Binary
{
private:
    string str;
    void checkBin();

public:
    void bind();
    void counter();
    void display();
};


void Binary::bind()
{
    cout<<"Enter a Binary Number: ";cin>>str;
    checkBin();
}

void Binary::checkBin(){
    for (int i = 0; i < str.length(); i++)
    {
        if (str.at(i) != '0' && str.at(i) != '1')
        {
            cout<<"This isn't a Binary Number."<<endl;
            exit(1);
        }
    }
    cout<<"This is a Binary Number."<<endl;
    
}

void Binary::counter()
{

    for (int i = 0; i < str.length(); i++)
    {
        if (str.at(i) == '0')
        {
            str.at(i) = '1';
        }
        else
        {
            str.at(i) = '0';
        }
        
    }
    
}

void Binary::display()
{
    cout<<"The Binary Number is: "<<str<<endl;
}

int main(){
    
    Binary myBin;
    
    myBin.bind();   
    myBin.display();   
    myBin.counter();   
    myBin.display();

    return 0;
}
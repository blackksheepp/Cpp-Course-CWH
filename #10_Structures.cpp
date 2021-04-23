#include <iostream>
#include <string.h>
using namespace std;

//* Create Structure 
struct Employee1
{
    char name[25];
    int age;
    char class_;
    float salary;

};

//* Using typedef to make alias for stuct structure-name
typedef struct Employee
{
    char name[25];
    int age;
    char class_;
    float salary;

} Emp;

//* Creating Union
union Bells
{
    int morning;
    int noon;
    int evening;
    int night;
};


int main(){

    //* Filling values of Structure
    // struct Employee harry;
    Emp harry;
    strcpy(harry.name,"Harry Potter");
    harry.age = 22;
    harry.class_ = 'A';
    harry.salary = 120000000.500;

    //* Printing values of Structure
    cout<<endl;
    cout<<"The Name is: "<<harry.name<<endl;
    cout<<"The Age is: "<<harry.age<<endl;
    cout<<"The Class is: "<<harry.class_<<endl;
    cout<<"The Salary is: "<<harry.salary<<endl;
    cout<<endl;
    
    //* Filling values of Union
    union Bells myBell;
    myBell.morning = 1;
    myBell.noon = 1;
    myBell.evening = 1;
    myBell.night = 0;

    //* Printing values of Structure
    cout<<endl;
    cout<<"Is it time to ring Morning Bell? "<<myBell.morning<<endl;
    cout<<"Is it time to ring Morning Bell? "<<myBell.noon<<endl;
    cout<<"Is it time to ring Morning Bell? "<<myBell.evening<<endl;
    cout<<"Is it time to ring Morning Bell? "<<myBell.night<<endl;
    cout<<endl;

    //* Enum 
    enum food {breakfast,lunch,dinner};
    food f1 = breakfast;
    food f2 = lunch;
 
    cout<<endl;
    cout<<"Breakfast: "<<f1<<endl;      
    cout<<"Lunch: "<<f2<<endl;      
    cout<<endl;
    
    return 0;
}
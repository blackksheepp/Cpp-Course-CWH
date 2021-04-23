#include <iostream>
#include <string.h>
using namespace std;

class Employee
{
    private:
        int salary, balance;
        char const *address;
        void getData(char const *key);
    
    public:
        int age;
        char const *name, *time, *job;
        
        void setData(char const *key, char const *value);
        void getJob();
        void getInfo();
        
};

void Employee::setData(char const *key, char const *value){
    
    if (key == "name"){
        name = value;
    }
    else if (key == "time"){
        time = value;
    }
    else if (key == "job"){
        job = value;
    }
    else if (key == "address"){
        address = value;
    }
    else if (key == "salary"){
        salary = atoi(value);
    }
    else if (key == "balance"){
        balance = atoi(value);
    }

}

void Employee::getData(char const *key){
    if (key == "name"){
        cout<<name<<endl;
    }
    else if (key == "time"){
        cout<<time<<endl;
    }
    else if (key == "job"){
        cout<<job<<endl;
    }
    else if (key == "address"){
        cout<<address<<endl;
    }
    else if (key == "salary"){
        cout<<salary<<endl;
    }
    else if (key == "balance"){
        cout<<balance<<endl;
    }
}

void Employee::getInfo(){

    cout<<endl;
    cout<<"Employee Information given Below :-"<<endl;
    cout<<"Name: ";
    Employee::getData("name");
    cout<<"Time: ";
    Employee::getData("time");
    cout<<"Job: ";
    Employee::getData("job");
    cout<<"Address: ";
    Employee::getData("address");
    cout<<"Salary: ";
    Employee::getData("salary");
    cout<<"Balance: ";
    Employee::getData("balance");
    
    cout<<endl;

}

void Employee::getJob(){
    cout<<name<<"'s Job is "<<job<<"."<<endl;
}

int main(){
    
    Employee harry;
    
    harry.setData("name","Harry Potter");
    harry.setData("time","9 AM to 5 PM");
    harry.setData("job","Senior Developer");
    harry.setData("address","Red Fort, Delhi, India");
    harry.setData("salary","65000");
    harry.setData("balance","1200000");
    
    harry.getInfo();
    harry.getJob();

    return 0;
}
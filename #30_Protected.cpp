#include <iostream>
using namespace std;


class Employee
{   
    protected:
        char const *name,*job,*time;
        int id,leaps; float salary;

    public:
        void setData(int inpId, char const *inpName, char const *inpJob, char const *inpTime, int inpLeaps, float inpSalary){
            id = inpId;
            name = inpName;
            job = inpJob;
            time = inpTime;
            leaps = inpLeaps;
            salary = inpSalary;
        }

        void showData(){
            cout<<"---------------------"<<endl
            <<"Id: "<<id<<endl
            <<"Name: "<<name<<endl
            <<"Job: "<<job<<endl
            <<"Time: "<<time<<endl
            <<"Leaps: "<<leaps<<endl
            <<"Salary: "<<salary<<endl;
        }    
};


class Manager : public Employee
{   
    public:
        void printData(){
            cout<<salary<<endl;
        }
};


int main(){

    Employee Rohan;
    Manager Harry;
    Rohan.setData(12,"Rohan","SE","1 to 6",12,12000);
    Rohan.showData();

    Harry.setData(12,"Rohan","SE","1 to 6",12,12000);
    Harry.printData();
    return 0;
}
#include <iostream>
using namespace std;

class Employee
{
    char const *name,*job,*time;
    int id,leaps; float salary;
    
    public:
        Employee(){}
        Employee(int inpId){
            id = inpId;
        }

        void setData(char const *inpName, char const *inpJob, char const *inpTime, int inpLeaps, float inpSalary){
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
    char const *post; 
    public:
        Manager(int inpId,char const *inpPost)
        :Employee(inpId)
        {
            post = inpPost;
        }

        void showData()
        {
            Employee::showData();
            cout<<"Post: "<<post<<endl;
        }

};

int main(){
    
    Employee Harry(1);
    Harry.setData("Harry Potter","Coder","5AM to 9PM",69,420000);
    Harry.showData();

    Manager Rohan(2,"Senior Manager");
    Rohan.setData("Rohan","Manager","9AM to 5PM",50,842000);
    Rohan.showData();    

    return 0;
}
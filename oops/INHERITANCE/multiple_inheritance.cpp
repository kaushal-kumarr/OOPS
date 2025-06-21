#include<iostream>
using namespace std;
class employee{
protected:
    string name;                                        //NOT HYBRID 
    int id;
    float salary;

    employee(string name, int id, float salary){
        this->name=name;
        this->id=id;
        this->salary=salary;
    }
    void emp_details(){
        cout<<"Employee Name Is :"<<name<<endl;
        cout<<"Employee Id is : "<<id<<endl;
        cout<<"Employee Salary Is : "<<salary<<endl;
    }
};

class department{
protected:
    string dept;

    department(string dept){
        this->dept=dept;
    }

    void display_dept(){
        cout<<"Employe department is : "<<dept<<endl;
    }
};

class fulltime:public employee,public department{
    protected:
        float ot;
    public:
    fulltime(float ot,string name, int id, float salary,string dept):employee(name , id, salary),department(dept){
        this->ot=ot;
    }

    void full_details(){
        emp_details();
        display_dept();
        cout<<"Your OT is : "<<ot<<endl;
    }
};

class part_time: public employee,public department{
    protected:
        int work_hours;

    public:
    part_time(int work_hours,string name, int id, float salary,string dept):employee(name , id, salary),department(dept){
        this->work_hours=work_hours;
    }

    void part_details(){
        emp_details();
        display_dept();
        cout<<"Your work hours  is : "<<work_hours<<endl;
    }
};

int main (){
    fulltime f1(25.0,"kaushal",01,153.0,"manager");
    cout<<"\t FULL TIME DETAILS"<<endl;
    f1.full_details();

    part_time p1(8,"rahul",02,15420.0,"diretor");
    cout<<"\t PART TIME DETAILS"<<endl;
    p1.part_details();

}
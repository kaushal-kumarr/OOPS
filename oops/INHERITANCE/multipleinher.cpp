#include<iostream>
using namespace std;
class employee{                 //MULTIPLE INHERITANCE 
protected:
    string name;
    int id;
    int salary;

    employee(string name,int id, int salary){
        this->name=name;
        this->id=id;
        this->salary=salary;
    }

    void display_details()
    {
        cout<<"..............................................."<<endl;
        cout<<"Your name is : "<<name<<endl;
        cout<<"..............................................."<<endl;
        cout<<"Your id is : "<<id<<endl;
        cout<<"..............................................."<<endl;
        cout<<"Your salary is : "<<salary<<endl;
        cout<<"..............................................."<<endl;
    }
};

class student{
protected: 
    string course;
    int years;
    float cgpa;

    student(string course,int years, float cgpa){
        this->course=course;
        this->years=years;
        this->cgpa=cgpa;
    }
public:
    void stu_details(){
        cout<<"Your course is : "<<course<<endl;
        cout<<"..............................................."<<endl;
        cout<<"duration in years is : "<<years<<endl;
        cout<<"..............................................."<<endl;
        cout<<"Your cgpa is : "<<cgpa<<endl;
        cout<<"..............................................."<<endl;
        
    }
};

class teaching_assistant: public employee,public student{
    public:
        string subject; 
    teaching_assistant(string name, int id, int salary,string course, int years, float cgpa,string subject)
    :employee(name,id,salary),student(course,years,cgpa){
         this->subject=subject;
    }

    void show_details(){
        display_details();
        stu_details();
        cout<<"The teacher subject is "<<subject<<endl;
        cout<<"..............................................."<<endl;
    }
};

int main (){
    teaching_assistant t1("kaushal",01,500,"BCA",03,8.5,"computer");
    t1.show_details();
    t1.student::stu_details();    // TO SHOW THE FUNCTION OF ANOTHER CLASS NOTE IT SHOULD BE PUBLIC
    }
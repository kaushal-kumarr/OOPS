#include<iostream>
using namespace std;
class employee{
protected:
    string name;
    int id;
    float salary;
employee(string name,int id,float salary){
    this->name=name;
    this->id=id;
    this->salary=salary;
}
};
class manager:protected employee{
    string department;
public:
    manager(string name,int id,float salary,string department):employee(name,id,salary){
    this->department=department;
}
void display(){
    cout<<name <<" "<<id<<" "<<salary<<" "<< department<<endl;
}
};
int main (){
    manager m1("rahul",001,25000,"manager");
    m1.display();
}
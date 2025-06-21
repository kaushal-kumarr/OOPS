#include<iostream>
using namespace std;
class employee{
    public:
        string name;
        int id;
    employee(string name , int id ){
        this->name=name;
        this->id=id;
    }
    void display_details(){
        cout<<name<<"\n";
        cout<<id<<"\n";
    }
};

class manager:public employee{
    public:
            string dept;
    manager(string name,int id,string dept):employee(name,id){
        this->dept=dept;
    }
    void display_details(){
    cout<<name<<endl;
    cout<<id<<endl;
    cout<<dept<<endl;
    }
};

int main(){
    employee e1("Kaushal",1);
    e1.display_details();
    manager m1("Nagesh",2,"head");
    m1.display_details();

}



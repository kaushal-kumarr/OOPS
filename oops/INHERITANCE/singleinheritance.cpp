#include<iostream>
using namespace std;

class person{
 protected:
            string name;
            int age;
        person(string name , int age){
            this->name=name;
            this->age=age;
        }
};
class student :public person{
        string grade; // this is by deafault private 
 public:
        student(string name , int age ,string grade):person(name,age){
         this->grade=grade;
    }
    void display(){
        cout<<name<<" "<<age<<" "<<grade<<" ";
    }
};
int main (){
    student s1("kaushal",10,"A");
    s1.display();
}
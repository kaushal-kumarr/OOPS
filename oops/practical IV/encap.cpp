#include<iostream>
using namespace std;
class student{
private:
        string name;
        int roll;
public:
student(string name, int roll){
    this->name=name;
    this->roll=roll;
}
void display(){
    cout<<"NAME:"<<name<<endl;
        cout<<"ROLL:"<<roll<<endl;
}
};

int main (){
    student s1("kaushal",7030);
    s1.display();
}
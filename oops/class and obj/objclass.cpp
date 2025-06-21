#include<iostream>
#include<string>
using namespace std;

class student
{
public:
    // properties / attribute / data members
    string name;
    int roll;
    long long mob_no;

    // methods / member function
    void show(){
        cout<<"your name is: "<<name<<endl;
        cout<<"your contact is: "<<mob_no<<endl;
    }
};
int main (){
    student s1;
    s1.name="kaushal";
    s1.roll=01;
    s1.mob_no=9128204316;

    s1.show();
    return 0;
}
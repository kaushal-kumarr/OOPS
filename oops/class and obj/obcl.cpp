#include<iostream>
#include<string>
using namespace std;
class  person_details
{
public:
    string name;
    int age;
    long long mob_no;
    string email;

    void getname(){
        cout<<name << endl;
    }
    
    void getage(){
        cout<<age<< endl ;
    }
        void getmail(){
        cout<<email;
    }
};
int main (){
    person_details p1;
    p1.name = "kaushal";
    p1.age = 10;
    p1.mob_no = 9128245316;
    p1.email = "kaushal@gmail.com";

    p1.getname();
    p1.getage();
    p1.getmail();
    return 0 ;
}
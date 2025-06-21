#include<iostream>
#include<string>
using namespace std;
class  person_details
{
private:
    long long mob_no;
public:
    string name;
    int age;
    string email;

    void getname(){
        cout<<name << endl;
    }
    
    void getage(){
        cout<<age<< endl ;
    }
        void getmail(){
        cout<<email<<endl;
    }
    long long setmob(long long m){
        mob_no=m;
    }
    void getmob(){
        cout<<mob_no<<endl;
    }
};
int main (){
    person_details p1;
    p1.name = "kaushal";
    p1.age = 10;
    p1.setmob (9128204316);
    p1.email = "kaushalsinghtbh@gmail.com";

    p1.getname();
    p1.getage();
    p1.getmail();
    p1.getmob();
    
    return 0 ;
}
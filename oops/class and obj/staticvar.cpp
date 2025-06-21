#include<iostream>
using namespace std;
class customer
{
    string name ;
    long long int acc_no;
    float balance;
    static int total_customer; // static data member 
    // creating constructor
    public:
    customer(string name, long long int acc_no , float balance ){
        this->name=name;
        this->acc_no=acc_no;
        this->balance=balance;
        total_customer+=1;
    }
    // TO ACCESS THE STATIC DATA MEMBER WE CAN CREATE A STATIC MEMBER FUNCTION WHICH CAN ACCESS THE STATIC DATA MEMBER AND PRINT IT 

    static void display_total(){
        cout<<"THE TOTAL CUSTOMER IN YOUR BANK IS :" <<total_customer<<endl;
    }
    void display(){
        cout<<name <<"   "<<acc_no<<"    "<<balance<<"   "<<endl; 
    } 
    void deposit(int amount){
        if(amount>0)
        balance+=amount;
        else
        cout<<"Invalid amount "<<endl;
    }
    void withdraw(int amount){
        if(amount<balance&& amount>0)
        balance-=amount;
        else
        cout<<"Invalid amount "<<endl;
    }
};
int customer :: total_customer=0;
int main (){
    int choice;
    customer c1("rahul", 53465874456635,1000.0);
    customer c2("kaushal",457864586456,1500);
    customer c3("raju", 53465874456635,2000.0);
    customer c4("amul", 5346584566635,1020.0);
    customer c5("lalu", 53465875699635,1500.0);
    customer c6("lalu", 53465877777635,3500.0);
    customer c7("rajnish", 53464444777635,3200.0);

    
    //c1.display();
    c2.display();
    //c3.display();
    c4.display();
    c5.display();
    c6.display();
    c1.deposit(200);
 
    c3.withdraw(-500);
    c3.display();
    c1.deposit(-500);
    c1.display();
    //c6.total_cus();  //  here we can call with anyone object at last or we can call direct but we have to declare it in public 
    customer::display_total();
};
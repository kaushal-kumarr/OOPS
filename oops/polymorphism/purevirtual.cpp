#include<iostream>
using namespace std;
class shape{
    public:
    virtual double area()=0;
};

class circle : public shape{
    public:
    double r;
    circle(double r){
        this->r=r;
    }

    double area(){
        return 3.14*r*r;
    }
} ;

class rectangle : public shape{
    public:
    double l,b;
    rectangle(double l, double b){
        this->l=l;
        this->b=b;
    }

    double area(){
        return l*b;
    }
};

int main (){
    shape *ptr;
    ptr= new circle(5);
    cout<<"Circle Area:"<<ptr->area()<<endl;
    delete ptr;

    ptr= new rectangle(4,5);
    cout<<"Rectangle Area:"<<ptr->area()<<endl;

    delete ptr;
}
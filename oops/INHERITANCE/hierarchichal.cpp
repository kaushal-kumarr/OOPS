#include<iostream>
using namespace std;
class vehicle{
    protected:
        string brand;
        int year;
    public:
    vehicle(string brand , int year ){
        this->brand=brand;
        this->year=year;
    }

    void display_details(){
        cout<<"..............................."<<endl;
        cout<<"The brand is : "<<brand<<endl;
        cout<<"..............................."<<endl;
        cout<<"Year is : "<<year<<endl;
        cout<<"..............................."<<endl;
    }
};

class car:public vehicle{
    protected:
        int capacity;
    public:
    car(int capacity,string brand,int year):vehicle(brand,year){
        this->capacity=capacity;
    }
    void car_details(){
        display_details();
        cout<<"The capacity is : "<<capacity<<endl;
        cout<<"..............................."<<endl<<endl;
    }
};

class truck:public vehicle{
    protected:
        int load;
    public:
    truck(int load,string brand,int year):vehicle(brand,year){
        this->load = load;
    }

    void truck_details(){
        display_details();
        cout<<"Load in Kg : "<<load<<endl;
        cout<<"..............................."<<endl;
    }
};

int main (){
    car c1(4,"toyota",2002);
    cout<<"\t CAR DETAILS"<<endl;
    c1.car_details();

    truck t1(54,"leyland",2005);
    cout<<"\t TRUCK DETAILS"<<endl;
    t1.truck_details();
}
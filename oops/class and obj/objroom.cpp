#include<iostream>
#include<string>
using namespace std;

class room
{
public:
    // data members / properties / attributes 
    float length;
    float breadth;
    float height;

    // methods / member function
    void calculate_area(){
        cout<<"The area is : " <<length*breadth<<endl;
        //return length*breadth;
    }
    int calculate_volume(){
        cout<<"The volume is : "<<length*breadth*height<<endl;
        return length*breadth*height;
    }
};

int main (){
    room r1;
    r1.length= 5;
    r1.breadth=5;
    r1.height=4;

    r1.calculate_area();
    r1.calculate_volume();
    return 0;
}

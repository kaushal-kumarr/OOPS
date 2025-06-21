#include<iostream>
using namespace std;
class shape{
protected:
   virtual void calculate_area(){
        cout<<"Calculating area of the shape : "<<endl;
    }
};
class circle:protected shape{
    float radius;
public: 
    circle(float radius){
    this->radius=radius;
}
void calculate_area() override{
    double area = 3.14*radius*radius;
    cout<<"The area of the circle is : "<<area;
}
};
int main (){
      circle c1(5);
      c1.calculate_area();
}
  

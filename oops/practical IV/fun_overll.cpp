#include<iostream>
using namespace std;

class area{
    //methods
    public:
    float calculate_area(int r){
        return 3.14*r*r;
    }
    int calculate_area(int l ,int b){
        return l*b;
    }
};

int main(){
    area a1,a2;
    cout<<a1.calculate_area(5)<<endl;;
    cout<<a2.calculate_area(5,4)<<endl;
}
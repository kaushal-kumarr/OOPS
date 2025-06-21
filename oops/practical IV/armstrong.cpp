#include<iostream>
using namespace std;
int main (){
    int t=0;
    int r;
    int num;
    cout<<"Enter the Number : ";
    cin>>num;

   int  number=num; //num ke value ko number me dal denge takki comparison me dikkat nhi hoga
    while (num!=0)
    {
        r=num%10;
        num=num/10;
        t+=r*r*r;
    }
        if (number==t)// agr yaha num==t krenge to num ka value 0 ayega kyuki num loop ke inside modified kiya ja rha hai 
        cout<<"Number "<<number<<" is Armstrong"; 
        else
        cout<<"Not an Armstrong Number ";  
}
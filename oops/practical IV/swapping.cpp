#include<iostream>
using namespace std;
int main (){
    int a,b,temp=0;
    cout <<"Enter the value of a :";
    cin>>a;
    cout <<"Enter the value of b :";
    cin>>b;

    cout <<"\t\t...........BEFORE SWAPPING........... "<<endl;
    cout <<"Value of a "<<a<<endl;
    cout <<"Value of b "<<b<<endl;

    /*temp=a;
    a=b;
    b=temp;*/
    a=a+b;
    b=a-b;
    a=a-b;

    cout <<"\t\t...........AFTER SWAPPING........... "<<endl;
    cout <<"Value of a "<<a<<endl;
    cout <<"Value of b "<<b<<endl;

}
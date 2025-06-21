#include<iostream>
using namespace std;
int main (){
    int a,b,c;
    cout<<"Enter the First Number: ";
    cin>>a;
    cout<<"Enter the Second Number: ";
    cin>>b;
    cout<<"Enter the Third Number: ";
    cin>>c;
    if (a>b && a>c)
    {
        cout<<" Number" <<a <<" is Greater";
    }
    if (b>a && b>c)
    {
        cout<<" Number" <<b <<" is Greater";
    }
    if (c>a && c>b)
    {
        cout<<"Number " <<c <<" is Greater";
    }
    return 0;
    
}
#include<iostream>
using namespace std;

int main (){
    char ch;
    cout<<"Enter the Character : ";
    cin>>ch;
    if (ch>='0' && ch<='9')
    {
        cout<<"Your are giving a number please input character ";
    }
    
    else if (ch=='a'|| ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch== 'I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
        cout<<"The character "<<ch <<" is Vowel";
    else
    cout<<"The Character " <<ch<<" is not Vowel";
}
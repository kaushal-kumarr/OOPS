#include<iostream>
using namespace std;
int main (){
    int first=0;
    int second =1;
    int next;
    int term;
    cout<<"Enter the number of terms: ";
    cin>>term;
    cout<<first<<" ";
    for(int i=0;i<=term;i++){
        cout<<second<<" ";
        next=first+second;
        first=second;
        second=next;
    }
}
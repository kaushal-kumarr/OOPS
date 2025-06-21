#include<iostream>
#include<string>
#include<vector>
using namespace std;
class  student
{
    public:
        string name;
        int roll;
        vector <int> marks;

        student(string a, int b, vector<int> c){
            name=a;
            roll=b;
            marks=c;
        }

        int totalmarks(){
            int sum=0;
            for(int i=0;i<=4;i++)
                sum=sum+marks[i];
            return sum;
        }
};
int main (){
    vector <int> marks ={25,50,50,36,85};
    student s1("Rahul kumar",10,marks);
    marks ={25,60,60,36,85};
    student s2("Rohit kumar",10,marks);
    cout<<"---------------------------------------------------------------------------"<<endl;
    s1.totalmarks();
    cout<<"Your name is : "<<s1.name<<"\t"<<"Your roll no is : "<<s1.roll<<"\t"<<"Your marks is : "<<s1.totalmarks()<<endl;
    cout<<"---------------------------------------------------------------------------"<<endl;
    s2.totalmarks();
    cout<<"Your name is : "<<s2.name<<"\t"<<"Your roll no is : "<<s2.roll<<"\t"<<"Your marks is : "<<s2.totalmarks()<<endl;
    cout<<"---------------------------------------------------------------------------"<<endl;

};
#include<iostream>
using namespace std;
int main()
{
    int num,total,marks;
    cout<<"Enter the number of students: ";
    cin>>num;
    total=0;
    for(int i=1;i<=num;i++)
    {
        cout<<"Enter the marks of student "<<i<<": ";
        cin>>marks;
        total=total+marks;
        cout<<endl;
        cout<<"Total marks: "<<total<<endl;
        cout<<endl;
        cout<<"Average marks: "<<total/num<<endl;
        cout<<endl;
                cout<<endl;
    
    }
}
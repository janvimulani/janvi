#include<iostream>

using namespace std;

struct student{
   int num,total,marks;
   int sub[2];
   char name[20];
   float per;
};
struct student a[2];
int main()
{
   int i;
   for(i=0;i<2;i++)
   {
     cout<<"Enter the num of the student"<<endl;
     cin>>a[i].num;
     cout<<"Enter the name of the student"<<endl;
     cin>>a[i].name;
    
    for(int j=0;j<2;j++)
    {
        cout<<"Enter the marks of the subject"<<endl;
        cin>>a[i].sub[j];
        a[i].total=a[i].total+a[i].sub[j];
    }
    a[i].per=a[i].total/2;
    cout<<"num:"<<a[i].num;
    cout<<"name:"<<a[i].name;
    cout<<"total:"<<a[i].total;
    cout<<"per:"<<a[i].per;
    cout<<endl;
   }
   return 0;
}
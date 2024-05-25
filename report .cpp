#include<iostream>
using namespace std;
class report
{
    private:
    int i;
    int adno;
    char name[20];
    float marks[5];
    float avg;
    float total;
    float per;
    void getavg(float avg);
    
    public:
    void readinfo();
    void display();
};
void report::  getavg(float avg,float total,float per)
{
    for(i=0;i<5;i++)
    {
        total =(marks[0] + marks[1] + marks[2] + marks[3] + marks[4]);
        avg=total/5;
        per=total*100/500;
       

    }
}
void report::readinfo()
{
    cout<<"enter the admission number:";
    cin>>adno;
    cout<<"enter the name:";
    cin>>name;
    for(i=0; i<5;i++)
    {
        cout<<"enter marks of subject:";
        marks[i];
    }
   
void report::display()
{
    cout<<"admission :"<<adno<<endl;
    cout<<"name:"<<name<<endl;
    for(i=0;i<5;i++)
    {
        cout<<"marks of subject"<<marks[i]<<endl;

    }
    cout<<"average:"<<avg<<endl;
    cout<<"percantage:"<<per<<endl;
}
int main()
{
    report r1;
    r1.readinfo();
    r1.display();

}

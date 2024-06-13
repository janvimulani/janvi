#include<iostream>
using namespace std;
class student
{
    private:
    int rollno;
    string name;
    int sub[5];
    int total;
    float per;
    float cal_par(int total);
    int cal_total();

    public:
    student()
    {
        cout<<"enter the roll no:";
        cin>>rollno;
        cout<<"enter the name:";
        cin>>name;

    }

};
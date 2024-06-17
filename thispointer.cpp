#include<iostream>
using namespace std;
class bank
{

int bal;
string name;

public:
void setdata(int bal,string name)
{
    this->bal=bal;
    this->name=name;
}

void getdata()
{
    cout<<"youer name:"<<name<<endl;
    cout<<"youer balance:"<<bal<<endl;
    
}

};

int main()
{
    bank b;
    b.setdata(10000,"janvi");
    b.getdata();

}
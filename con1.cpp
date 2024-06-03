#include<iostream>
using namespace std;
class solid
{
    public:
    int shape()

{
    cout<<"basic function called:"<<endl;
}
int shape(int a)
{
    cout<<"solid of cube:"<<a*a*a<<endl;
}
int shape(int r,int a)
{
    cout<<"solid of capusal:"<<(3.14*(r*r))*((1.33*r)+a)<<endl;
}
int shape(int l,int b, int h)
{
    cout<<"solid of cuboid:"<<l*b*h<<endl;
}
};

int main()
{
    solid s;
    s.shape(2,3,3);
}


#include<iostream>
using namespace std;
class solid()
{
    cout<<"defalut constructor called:"<<endl;

}
solid (int a)
{
    cout<<"solid of cube:"<<a*a*a<<endl;
}
solid (int r,int a)
{
    cout<<"solid of capsule:"<<(3.14*(r*r))*((1.33*r)+a)<<endl;
}
solid (int l,int b, int h)
{
    cout<<"solid of cuboid:"<<l*b*h<<endl;
}
int main()
{
    solid d(),s(3),c(2,3),cu(1,2,3);
}
#include<iostream>
using namespace std;
class solid
{
    public:
    solid()
<<<<<<< HEAD
    {
        cout<<"default constructoer call:"<<endl;
    }
    solid(int a)
    {
        cout<<"solid of cube:"<<a*a*a<<endl;
    }
    solid(int r , int a)
    {
        cout<<"solid of capsule:"<<(3.14*(r*r))*((1.33*r)+a)<<endl;
    }
    solid(int l,int b, int h)
    {
        cout<<"solid of cuboid:"<<l*b*h<<endl;
    }
};
int main()
{
    solid d(),s(30),c(3,6),cu(10,20,30);
}
=======

{
    cout<<"defalut consturctor call:"<<endl;
}
solid(int a)
{
    cout<<"solid of cube:"<<a*a*a<<endl;
}
solid(int r,int a)
{
    cout<<"solid of capusal:"<<(3.14*(r*r))*((1.33*r)+a)<<endl;
}
solid(int l,int b, int h)
{
    cout<<"solid of cuboid:"<<l*b*h<<endl;
}
};

int main()
{
    solid d(),s(3),c(3,6),cu(10,20,30);
}

>>>>>>> a49f5c63200bbfcbb0b83d0917a61676c5190cee

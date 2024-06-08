// friend function using operator overloading
#include <iostream>
using namespace std;
class box
{
    int l, w, h;

public:
    void setdata(int a, int b, int c)
    {
        l = a, w = b, h = c;
    }
    int getvolume()
    {
        return l * w * h;
    }
    friend box operator+(box m, box n)
    {
        box t;
        t.l = m.l + n.l;
        t.w = m.w + n.w;
        t.h = m.h + n.h;
        return t;
    }
    friend box operator++(box n, int)
    {
        box t;
        t.l=++n.l;
        t.w=++n.w;
        t.h=++n.h;
        return t;

    }
};

int main()
{
    //box a[10];
    box a,b,c,d;
    a.setdata(2,3,4);
    b.setdata(3,4,5);

    cout<<"volume of A is:"<<a.getvolume()<<endl;
    cout<<"volume of A is:"<<b.getvolume()<<endl;
      c=a+b; //5 5 5
      cout<<"volume of c is :"<<c.getvolume()<<endl;
      d= c++; // 6 6 6
      cout<<"volume of d is :"<<d.getvolume()<<endl;   
}
#include<iostream>
using namespace std;
class area{
    public:
    
     shape(int b, int h)
     {
         cout<<"triengle  area :"<<0.5*(b*h)<<endl;
     }
    shape(int r)
    {
        cout<<"circle area :"<<3.14*(r*r)<<endl;
      
    }
    shape(int l,int w,int h)
    {
        cout<<"rectengle prime:"<<l*w*h<<endl;

    }  

    
};
int main()
{
    area a;
    a.shape(20,30);
    a.shape(34);
}
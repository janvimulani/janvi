#include<iostream>
using namespace std;
class area{
    public:
     area(int b, int h)
     {
         cout<<"triengle  area :"<<0.5*(b*h)<<endl;
     }
    area(int r)
    {
        cout<<"circle area :"<<3.14*(r*r)<<endl;
      
    }
    area(int l,int w,int h)
    {
        cout<<"rectengle prime:"<<l*w*h<<endl;

    }  

    
};
int main()
{
    area a(3,6),b(20),c(10,25,45);
}
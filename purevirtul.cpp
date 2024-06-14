#include<iostream>
using namespace std;
class base{
    public:
    virtual void hello()=0;
    
};
 
 class derived : public base
 {
    public:
    void hello()
     {
        cout<<"derived class hello function"<<endl;
     }
 };
 int main()
 {
    base *p;
    derived d;

    //p=&b;
   //p->hello();

    p=&d;
    p->hello();
 }
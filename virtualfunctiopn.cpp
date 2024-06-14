#include<iostream>
using namespace std;
class base{
    public:
    virtual void hello()
    {
       cout<<"base class hello function"<<endl;
    }
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
    base *p,b;
    derived d;

    p=&b;
    p->hello();

    p=&d;
    p->hello();
 }
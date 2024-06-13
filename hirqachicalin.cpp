#include<iostream>
using namespace std;
class base
{
    protected:
    int a;
    public:
    void setA()
    {
        cout<<"enter a:";
        cin>>a;
    }
};  
    class ABC: public base
    {

        int b;
        public:
        void set B()
        {
           cout<<"enter b:";
           cin>>b; 
        }
        void add()
        {
            cout<<"addition of a and b is :"<<a+b<<endl;
        }

    };
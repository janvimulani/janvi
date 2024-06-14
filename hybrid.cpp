#include<iostream>
 using namespace std;
class base
{
    protected:
    int a;
    public:
    void setA()
    {
        cout <<"enter a:";
        cin>>a;
    }
};
class abc:public base
{
    protected:
    int b;
    public:
    void setB()
    {
        cout <<"enter b:";
        cin>>b;
    }
};
class xyz
{
    protected:
    int c;
    public:
    void setC()
    {
        cout <<"enter c:";
        cin>>c;
    }
};
class derived : public abc,public xyz{
    public:
    void product()
    {
        cout<<"product od a,b&c is:"<<a*b*c<<endl;   
    }
};
int main()
{
    derived d;
    d.setA();
    d.setB();
    d.setC();
    d.product();
    
}
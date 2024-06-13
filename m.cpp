#include <iostream>
using namespace std;
class base
{
protected:
    int a;

public:
    void setA()
    {
        cout << "enter a :";
        cin >> a;
    }
};

class ABC:public base
{
protected:
    int b;

public:
    void setB()
    {
        cout << "enter b:";
        cin >> b;
    }
};

class derived : public ABC
{
public:
    void product()
    {
        cout << "product of a and b is :" << a * b << endl;
    }
};

int main()
{
    derived d;
    d.setA();
    d.setB();
    d.product();
};
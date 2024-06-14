#include <iostream>
using namespace std;
class base
{
protected:
    int a;

public:
    void setA()
    {
        cout << "enter a : ";
        cin >> a;
    }
};
class ABC : public base
{
    int b;

public:
    void setB()
    {
        cout << "enter b : ";
        cin >> b;
    }
    void add()
    {
        cout << "addition of a and b is : " << a + b << endl;
    }
};

class XYZ : public base
{
    int c;

public:
    void setC()
    {
        cout << "enter c : ";
        cin >> c;
    }
    void product()
    {
        cout << "product of a and c is : " << a * c << endl;
    }
};
int main()
{
    ABC a;
    a.setA();
    a.setB();
    a.add();

    XYZ x;
    x.setA();
    x.setC();
    x.product();
}
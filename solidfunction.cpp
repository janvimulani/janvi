#include <iostream>
using namespace std;
class solid
{
public:
    shape()
    {
        cout << "default constructoer call:" << endl;
    }
    shape(int a)
    {
        cout << "solid of cube:" << a * a * a << endl;
    }
    shape(int r, int a)
    {
        cout << "solid of capsule:" << (3.14 * (r * r)) * ((1.33 * r) + a) << endl;
    }
    shape(int l, int b, int h)
    {
        cout << "solid of cuboid:" << l * b * h << endl;
    }
};
int main()
{
    solid d;
    d.shape(45);
    d.shape(3, 6);
}
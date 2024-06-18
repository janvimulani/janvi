#include <iostream>

using namespace std;

template <class T>
void display(T t1)
{
    cout << "Displaying Template : "
         << t1 << endl;
}

template < class x , class y >
void Display(x a , y b)
{
    cout << "Display Template : "
         << a << "\t"
         << b << endl;
}
template < class x , class y >
void add(x a , y b)
{
    cout << "addition is : "<<a+b<<endl;
         
}

int main()
{
    display(700);
    display(9.07);
    display('D');
    Display('D' , 7.99);
    Display('S' , 7);
    Display(99 , 07);
    add(2,2.25);
    add('a',5.25);

    return 0;
}
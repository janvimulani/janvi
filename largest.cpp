#include<iostream>
using namespace std;

class Number
{
    private :

    int num;

    public :
        Number (int n)
        {
            num = n;
        }
     friend int findlargest(Number n1 , Number n2,Number n3);          
};
int findlargest(Number n1 , Number n2 ,Number n3){

    if (n1.num > n2.num && n1.num > n3.num )
    {
        return n1.num;
    }
    else if (n1.num < n2.num && n2.num > n3.num)
    {
        return n2.num;
    }
     else 
    {
    return n3.num;
    }
 
}
int main ()
{
    int nu1,nu2,nu3;

    cout << "Enter First Number : ";
    cin >> nu1;
    cout << "Enter Second Number : ";
    cin >> nu2;
     cout << "Enter third Number : ";
    cin >> nu3;

    Number n1(nu1);
    Number n2(nu2);
    Number n3(nu3);


    int largest = findlargest(n1, n2,n3);
    cout << "The largest number is: " << largest << endl;
}

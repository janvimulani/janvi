#include<iostream>
using namespace std;
int fac(int n)
{
    if(n==1 || n==0)
    {
        return 1;
    }
    else
    {
        return n*fac(n-1);
    }

};
int main()
{
    int n,total=0;
    cout<<"enter the factorial number:";
    cin>>n;
    total=fac(n);
    cout<<"the factorial of "<<n<<"is:"<<total;
    return 0;
}
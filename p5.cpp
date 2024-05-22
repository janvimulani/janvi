#include<iostream>
using namespace std;
int main()
{
    int i,j,a=65;
    for(i=65;i<=69;i++)
    {
        for(j=65;j<=i;j++)
        {
            if(i%2==0)
            {
                cout<<char(a);
            }
            else
            {
                cout<<char(a+32);
            }
            a++;
        }
        cout<<endl;
    }
}
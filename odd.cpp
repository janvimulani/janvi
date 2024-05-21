#include<iostream>
using namespace std;
int main()
{
    int n,i,total=0;
    cout<<"enter the number:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i%2==1)
        {
            total +=i;
            cout<<i;
            cout<<endl;
        }
    }
    cout<<total;
}
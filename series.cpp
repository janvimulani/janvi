#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    cout<<"enter the number:";
    cin>>n;
    do
    {
        cout<<"\t"<<i*i;
        i++;
    } while (i<=n);
    
}
#include<iostream>

using namespace std;

int main()
{
    int a[3][5];
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>a[i][j];
        }
    
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
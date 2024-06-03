#include<iostream>

using namespace std;

int main()
{
int i,j,k;

cout<<"Enter the number of rows: ";

cin>>i;

cout<<"Enter the number of columns: ";

cin>>j;

int a[i][j];

for(k=0;k<i;k++)
{
    for(int l=0;l<j;l++)
    {
        cout<<"Enter the element: ";
        cin>>a[k][l];
    }
}

for(k=0;k<i;k++)
{
    for(int l=0;l<j;l++)
    {
        cout<<a[k][l]<<" ";
    }
    cout<<"\n";
}

return 0;
}
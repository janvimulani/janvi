#include<iostream>

using namespace std;

int main()
{
    int i=1,t=0,t1=1,s;
    do
    {
        cout<<t1<<" ";
        s=t1+t;
        t=t1;
        t1=s;
        i++;
        if(i==10)
        {
            break;
        }
        }while(i<=10);
        return 0;
}
    

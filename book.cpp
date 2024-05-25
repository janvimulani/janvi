#include<iostream>
using namespace std;
class book
{
   
    int bno,n;
    char booktitle[20];
    float price;
    float tcost;

    void totalcost(int n)
    {
        tcost=price*n;
        cout<<tcost;

    }

    public:
    void input();
    void purchase();
};

void book::input()
{
    

    cout<<"enter the bno:";
    cin>>bno;
    cout<<"enter the booktitle:";
    cin>>booktitle;
    cout<<"enter the price:";
     cin>>price;
    
}

void book::purchase()
{
    int n;
    cout<<"enter the copies num:";
    cin>>n;
    totalcost(n);
}
int main()
{
   class book b1;
   b1.input();
   b1.purchase();
}
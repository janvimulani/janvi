#include<iostream>
using namespace std;
class squre
{
    public: 
    int n;
    void set_squre()
    {
        cout<<"enter n number : ";
        cin>>n;  
    for(int i=1;i<=n;i++)
    {
        int j=i*i;
        cout<<"\t"<<j<<endl;
    }
    }
    
};
class derived: public squre
{
    public:
    void get_squre()
    {
        cout<<"\t"<<n*n<<endl;
    }
};
int main(){
    derived d;
    d.set_squre();
    d.get_squre();
}
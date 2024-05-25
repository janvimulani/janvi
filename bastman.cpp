#include<iostream>
using namespace std;
class bastman
{
    private:
    int bcode;
    char name[20];
    int innings,notout,runs;
    float bastsavg;
     void calcavg(int runs,int innings,int notout);

    public:
    void reddata();
    void displaydata();
    
}; 
void bastman::calcavg(int runs,int innings,int notout)
    {
        bastsavg=(float)runs/innings;
    } 
    void bastman::reddata()
    {
      cout<<"enter bastman code:";
      cin>>bcode;
      cout<<"enter bastman name:";
      cin>>name;
      cout<<"enter the innings:";
      cin>>innings;
      cout<<"enter the notout:";
      cin>>notout;
      cout<<"enter the runs:";
      cin>>runs;
    }
    
    void bastman::displaydata()
    {
        cout<<"bastman code:"<<bcode<<endl;
        cout<<"bastman name:"<<name<<endl;
        cout<<"innings:"<<innings<<endl;
        cout<<"notout:"<<notout<<endl;
        cout<<"runs:"<<runs<<endl;
        cout<<"bastman average:"<< bastsavg<<endl;
    }
    int main()
    {
        class bastman b1;
        b1.reddata();
        b1.displaydata();
    }

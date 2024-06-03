#include<iostream>
using namespace std;
class batsman
{
 private:
    int bcode;
    char bname[20];
    int inning,notout,runs;
    float batavg;
    void clacvag();
  public :
   batsman()
   {
    cout<<"\nEnter the batsman code : ";
    cin>>bcode;
    cout<<"\nEnter the batsman name : ";
    cin>>bname;
    cout<<"\nEnter the inning : ";
    cin>>inning;
    cout<<"\nEnter the notout : ";
    cin>>notout;
    cout<<"\nEnter the runs : ";
    cin>>runs;
    clacvag();
   }
   
   ~batsman()
   {
      cout<<"value destoryed";
   }
   void displaydata()
   {
    cout<<"\nThe batsman code is : "<<bcode;
    cout<<"\nThe batsman name is : "<<bname;
    cout<<"\nThe inning is : "<<inning;
    cout<<"\nThe notout is : "<<notout;
    cout<<"\nThe runs is : "<<runs;
    cout<<"\nThe batavg is : "<<batavg;
   }
   };
   void batsman :: clacvag()
   {
    batavg=(float)runs/inning;
   };
   int main()
   {
    class batsman b1;
   
    b1.clacvag();
    b1.displaydata();
    return 0;
   }
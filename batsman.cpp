#include<iostream>

using namespace std;


   class BATSMAN 
   {
    int bcode;
    char bname[20];
    int inning,notout,runs;
    float batavg;
    void clacvag();
  public :
   BATSMAN(inning,notout,runs);
   
   {
    
   }

   };
   void BATSMAN :: clacvag()
   {
    batavg=(float)runs/inning;
   }
   void BATSMAN :: reddata()
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
   void BATSMAN ::displaydata()
   {
    cout<<"\nThe batsman code is : "<<bcode;
    cout<<"\nThe batsman name is : "<<bname;
    cout<<"\nThe inning is : "<<inning;
    cout<<"\nThe notout is : "<<notout;
    cout<<"\nThe runs is : "<<runs;
    cout<<"\nThe batavg is : "<<batavg;
   }
   int main()
   {
    BATSMAN b1;
    b1.reddata();
    b1.displaydata();
    return 0;
   }


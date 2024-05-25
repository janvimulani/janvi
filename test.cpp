#include<iostream>
using namespace std;
class test
{
    private:
    int testcode;
    char discription[10];
    int  nocandidate;
    int centerreqd;

 int calcntr(int nocandidate);
 
 public:
 void shedule();
 void disptest();

};
int test:: calcntr(int nocandidate)
 {
    int centerreqd=nocandidate/100+1;
    return centerreqd;
 }

void test::shedule()
{
    cout<<"enter the test code:";
    cin>>testcode;
    cout<<"enter the discription:";
    cin>>discription;
    cout<<"enter the no of candidate:";
    cin>>nocandidate;
    
}
void test::disptest()
{
    cout<<"testcode:"<<testcode<<endl;
    cout<<"discription:"<<discription<<endl;
    cout<<"nocandidate:"<<nocandidate<<endl;
    cout<<"centerreqd:"<<calcntr(nocandidate)<<endl;
}
int main()
{
   class test t;
   t.shedule();
   t.disptest();
   return 0;
}
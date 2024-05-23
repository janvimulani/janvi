#include<iostream>
using namespace std;
class student
{
    private:
    int admno;
    int eng,math,sci;
    float total;
    char name[20];
    float ctotal(float eng,float math,float sci);

    public:
    void takedata();
    void showdata();
    float ctotal(){
         return(eng+math+sci)/3;
    }
    
};
   void student::takedata()
   {
     cout<<"enter student admno:";
     cin>>admno;
     cout<<"enter student name:";
     cin>>name;
     cout<<"enter student eng marks:";
     cin>>eng;
     cout<<"enter student math marks:";
     cin>>math;
     cout<<"enter student sci marks:";
     cin>>sci;
   }
   float student::ctotal(float eng,float math,float sci){
    total =  eng+math+sci;
      return total;
   }
      

   void student::showdata()
   {
    cout<<"\n admission no :"<<admno;
    cout<<"\n student name :"<<name;
    cout<<"\n eng marks :"<<eng;
    cout<<"\n student math marks :"<<math;
    cout<<"\n student sci marks :"<<sci;
    cout<<"\n student ctotal marks :"<<ctotal(eng,math,sci);
   }

    int main()
    {
        class student st1;
        st1.takedata();
        st1.showdata();
    }

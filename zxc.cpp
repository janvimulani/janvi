#include<iostream> 
using namespace std; 
 
   class students{ 
    private: 
    public: 
    int a=1; 
    int b=2; 
      
   students(int x, int y){//defult 
     cout<<"defult"<<endl; 
       a=x; 
       b=y; 
    } 
    students(){ //prtamiterwise 
        cout<<"prtamiter"<<endl; 
         
    } 
 
   }; 
int main(){ 
    class students s1; 
   cout<<"s1 a="<<s1.a<<endl; 
    cout<<"s1 b="<<s1.b<<endl; 
     class students s2(10,11); 
    cout<<"s2 a="<<s2.a<<endl; 
    cout<<"s2 b="<<s2.b<<endl; 
 
 
 
   return 0; 
}
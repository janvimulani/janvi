#include<iostream>
using namespace std;
class students
{
    private:
       int a;
       int b;

       public:
       students(int a1,int b1)
       {
         a=a1;
         b=b1;
       }
       ~students()
       {
         
         cout<<"value is the destroy";
       }
       void display()
       {
        cout<<a<<b<<endl;
       }
};
int main()
{
students s1(50,80);
s1.display();
 return 0;

}

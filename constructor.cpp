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
    ~students(){
   
    cout<<"value destoryed";
    }

    display()
    {
        cout<<
        
        <<b<<endl;
    }
    
};
int main()
{
     students st1(10,20);
     st1.display();
    return 0;
}
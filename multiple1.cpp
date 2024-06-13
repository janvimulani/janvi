#include<iostream>

using namespace std;

class Bird
{
    
  protected:

    void fly()
    {
        cout <<"Bird Can Fly  " << endl;
    }
};

class Fish
{
  protected :

    void swim()
    {
        cout <<"Fish Can Swim " << endl;
    }
};

class Animal : protected Bird , protected Fish
{
   public:

    void animal()
    {
        
        fly();
        swim();
       
    }
};

int main()
{
    Animal a;

    a.animal();
}
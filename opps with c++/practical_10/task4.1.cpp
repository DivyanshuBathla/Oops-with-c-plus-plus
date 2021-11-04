#include<iostream>
using namespace std;
class test2;
class test1
{
    int a;
    public:
    void set_data(int a)
    {
        this->a=a;
    }
    friend void operator>(test1,test2);
};
class test2
{
    
    int a;
     public:
    void set_data(int a)
    {
        this->a=a;
    }
    friend void operator>(test1,test2);
};
void operator>(test1 t1,test2 t2)
{
     (t1.a>t2.a)?cout<<t1.a<<" greater than "<<t2.a:cout<<t2.a<<" greater than "<<t1.a;
     
}

int main()
{
    test1 t1;
    test2 t2;
    cout<<"\nEnter the value of class 1=";
     int a;
    cin>>a;
    t1.set_data(a);
    cout<<"\nEnter the value of class 2=";
    cin>>a;
    t2.set_data(a);
    t1>t2;
}
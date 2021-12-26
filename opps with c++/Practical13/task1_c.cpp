#include <iostream>
using namespace std;
class Base{
public:
     float add(int a,float b)
     {
         return(a+b);
     }
};
class Child:public Base{
public:
     using Base::add;
     int add(int a,int b) //overhiding the add function of base class
     {
         return(a+b+1);
     }
     float add(float a,float b)
     {
         return(a+b);
     }
};
int main()
{
    Base obj;
    Child obj_child;
    cout<<"Trying Calling overhidiing function of Base class"<<obj_child.add(2,3.2f); 
    //unable to call base class overloaded function
    cout<<"\n Calling overloaded function of base class="<<obj_child.add(2.3f,9.4f);


}

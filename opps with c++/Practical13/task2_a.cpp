#include <iostream>
using namespace std;
class Base{
public:
     Base()
     {
         cout<<"\nBase class object created";
     }
     virtual float add(int a,float b)
     {
         cout<<"\nBase class add function=";
         return(a+b);
     }
 
     virtual int sub(int a,int b)=0;
         
     
};
class Child:public Base{
public:
Child()
     {
         cout<<"\nChild class object created";
     }
     using Base::add;
  
     float add(int a,float b)
     {
         return(a+b+1);
     }
     int sub(int a,int b)
     {
         return(a-b);
     }
};
int main()
{
    
     Child obj_c;
     Base *ptr;
     ptr=&obj_c;
     cout<<"\nOverrdded function="<<ptr->add(2,3);
     
}

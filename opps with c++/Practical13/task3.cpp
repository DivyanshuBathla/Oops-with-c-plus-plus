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
 
     int sub(int a,int b){
         cout<<"\nBase class sub function=";
         return(a-b);
     }
         
     
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
         cout<<"\nAdd function of child class=";
         return(a+b+1);
     }
     int sub(int a,int b)
     {
         cout<<"\nSub function of Base class=";
         return(a-b);
     }
};
int main()
{
    
     Child obj_c;
     Base *ptr;
     ptr=&obj_c;
     cout<<"\nCompile time binding:"<<ptr->sub(2,3);
     cout<<"\nRunntime time binding:"<<ptr->add(2,3);

     
}

#include <iostream>
using namespace std;
class Base{
public:
     Base()
     {
          cout<<"Inside Base class constuctor:"<<endl;
     }
    virtual ~Base()
     {
        cout<<"Inside Base class destructor:"<<endl;
     }
         
     
};
class Child:public Base{
public:
Child()
     {
         cout<<"Inside child class constuctor"<<endl;
     }
     ~Child()
     {
         cout<<"Inside Child class destructor:"<<endl;
     }
     
};
int main()
{
    
     Child obj_c;
     Base *ptr;
     ptr=&obj_c;
     delete(ptr);    

     
}

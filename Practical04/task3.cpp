#include<iostream>

using namespace std;
namespace n1
{
     int add(int a,int b)
     {
     	return(a+b);
     }
}

namespace n2
{
     float add(float a,float b)
     {
     	return(a+b);
     }
}


int main()
{
   
   cout<<"\nWithout Using namespace n1="<<add(3,5)<<endl;
    cout<<"\nWithout Using namespace n1="<<add(3.5f,5.2f)<<endl;
    
   
   

}

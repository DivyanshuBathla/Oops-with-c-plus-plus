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
   
   cout<<"\nUsing namespace 1="<<n1::add(3,5);
    cout<<"\nUsing namespace 2="<<n2::add(1.5f,2.5f)<<endl;
   
   

}

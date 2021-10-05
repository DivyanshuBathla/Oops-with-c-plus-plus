#include<iostream>

using namespace std;
namespace n1
{
     float add(float a,int b)
     {
     	return(a+b);
     }
}

namespace n2
{
     float add(int a,float b)
     {
     	return(a+b);
     }
}


int main()
{
   using namespace n1;
   using namespace n2;
   cout<<"\nUsing namespace n1="<<add(3.2f,5)<<endl;
    cout<<"\nUsing namespace n2="<<add(3.5,5.2f)<<endl;
    
   
   

}

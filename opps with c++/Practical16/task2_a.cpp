#include<iostream>
using namespace std;
int main()
{
   int a=5;
   int b=0,z;
   try{
       if(b==0){
           throw runtime_error("Attempted to divide by 0");
       }
     z=a/b;
   }
   catch(runtime_error e)
   {
       cout<<"Error occured="<<e.what();
   }
}

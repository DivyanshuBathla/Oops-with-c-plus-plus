#include<iostream>
using namespace std;
class test
{
   int a;
   public:
   void set_data(int x)
   {
       a=x;
   }
   int get_data()
   {
       return(a);
   }
   friend test operator+(test,test);
};
 
 test operator+(test t1,test t2)
 {
     test temp;
     temp.a=t1.a+t2.a;
     return(temp);
 }

int main()
{
   test t1,t2,t3;
   cout<<"Enter the two numbers=";
   int a,b;
   cin>>a>>b;
   t1.set_data(a);
   t2.set_data(b);
   t3=t1+t2;
   cout<<"\nThe sum is="<<t3.get_data();
}
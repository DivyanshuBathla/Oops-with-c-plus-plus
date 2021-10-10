#include<iostream>
using namespace std;
int main()
{
   int a=252;
   float b=2.51;
   short x=1254;
   char c='a';
   long d=12548554;
   long double l=548.84454854;
   double e=2.544646584;
   bool f=true;
   cout<<"size of short="<<sizeof(short)<<endl;
   cout<<"size of short variable="<<sizeof(x)<<endl;
   cout<<"size of int ="<<sizeof(int)<<endl;
   cout<<"size of int variable="<<sizeof(a)<<endl;
   cout<<"size of float="<<sizeof(float)<<endl;
   cout<<"size of float variable="<<sizeof(b)<<endl;
   cout<<"size of char="<<sizeof(char)<<endl;
   cout<<"size of char variable="<<sizeof(c)<<endl;
   cout<<"size of long="<<sizeof(long)<<endl;
   cout<<"size of long variable="<<sizeof(d)<<endl;
   cout<<"size of double ="<<sizeof(double)<<endl;
    cout<<"size of double variable="<<sizeof(e)<<endl;
    cout<<"size of long double="<<sizeof(long double)<<endl;
   cout<<"size of long double variable="<<sizeof(l)<<endl;
   cout<<"size of bool="<<sizeof(bool)<<endl;
   cout<<"size of bool variable="<<sizeof(f)<<endl;


}

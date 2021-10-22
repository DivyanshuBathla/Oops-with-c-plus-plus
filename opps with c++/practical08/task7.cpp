#include<iostream>
using namespace std;
void v1swap(int a,int b)
{
   int temp=a;
   a=b;
   b=temp;
   cout<<"After swap using a="<<a<<" and b="<<b<<endl; 
}

void v2swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
void v3swap(int *a,int *b)
{
    int *temp=a;
    a=b;
    b=temp;
}
int main()
{
  int a,b;
  cout<<"Enter the numbers you want to swap:"<<endl;
  cin>>a>>b;
  v1swap(a,b);
  int c=a,d=b;
  v2swap(a,b);
  cout<<"After swap using a="<<a<<" and b="<<b<<endl; 
  v3swap(&c,&d);
  cout<<"After swap using a="<<a<<" and b="<<b<<endl; 
}

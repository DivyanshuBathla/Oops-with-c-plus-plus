#include<iostream>
using namespace std;
int main()
{
  cout<<"Enter the part of program you want to execute\nV1.output\nV2.change value of a"<<endl;
  int ch;
  cin>>ch;
  if(ch==1)
  {  int a = 10;

       int *p;

	int **q;

	p = &a;

	q = &p;

	cout << *p<<endl;

	cout << **q;
	cout<<endl;
 }
 else
   {
      cout<<"Enter the value of a=";
      int a;
      cin>>a;
      int *p=&a;
      int **q=&p;
      cout<<"\nEnter the value of a you want to edit";
      int t;
      cin>>t;
      **q=t;
      cout<<"\nThe updated value of a="<<a<<endl; 
   }
}

#include<iostream>
using namespace std;
int main()
{
   int ch;
   cout<<"Enter the part of program you want to execute\nV1.issue\nV2.solution"<<endl;
   cin>>ch;
   if(ch==1)
   {
   int arr[] = {10,20,30};
   cout << *arr<<endl;
   cout << arr<<endl;
   arr++;
   cout << *(arr)<<endl;
   }
   else{
      int arr[] = {10,20,30};
   cout << *arr<<endl;
   cout << arr<<endl;
   cout << *(arr+1)<<endl;
   }
   
   
}

#include<iostream>
using namespace std;
int main()
{
   int x;
   cout<<"Enter the size of square matrix=";
   cin>>x;
   cout<<endl;
   char arr[x][x];
   for(int i=0;i<x;i++)
   {
   	for(int j=0;j<x;j++)
  	{
           if(i>=j)
           arr[i][j]='*';
           else
           arr[i][j]=' ';
   	}
   }
   for(int i=0;i<x;i++)
   {
   	for(int j=0;j<x;j++)
  	{
          cout<<arr[i][j]<<" ";
   	}
   	cout<<"\n";
   }
 cout<<"\n";
}

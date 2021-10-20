#include<iostream>
using namespace std;
int main()
{
   int x;
   cout<<"Enter the size of square matrix=";
   cin>>x;
   cout<<endl;
   char arr[x][x];
   int m=0,l=0;
   for(int i=x-1;i>=0;i--)
   {
   	for(int k=0;k<i;k++)
  	{
           arr[l][m++]=' ';
   	}
   	for(int j=i;j<x;j++)
   	{
   	    arr[l][m++]='*';
   	}
   	l++;
   	m=0;
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

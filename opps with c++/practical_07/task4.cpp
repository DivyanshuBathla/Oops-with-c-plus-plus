#include<iostream>
using namespace std;



int main()
{
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int a=3,b=3;
    int c;
    int m=2,l=0;
    cout<<"Enter your choice";
    cin>>c;
    switch(c)
    {
      case 1:   
                for(int i=a-1;i>=0;i--)
		{
              	 for(int j=b-1;j>=0;j--)
                 {
                	arr[i][j]=arr[l][m];
                 }
       	 
       	 m--;
   		}   
   		for(int i=0;i<a;i++)
		{
              	 for(int j=0;j<b;j++)
                 {
                	cout<<*(*(arr+(i))+j)<<" ";
                 }
       	 cout<<"\n";
   		} 
               break;
     case  2: for(int i=0;i<a;i++)
		{
              	 for(int j=0;j<b;j++)
                 {
                	arr[i][j]=i+1;
                 }
       	 
   		} 
   		for(int i=0;i<a;i++)
		{
              	 for(int j=0;j<b;j++)
                 {
                	cout<<*(*(arr+(i))+j)<<" ";
                 }
       	 cout<<"\n";
   		} 
               
               break;
      case  3: for(int i=0;i<a;i++)
		{
              	 for(int j=0;j<b;j++)
                 {
                	arr[i][j]=arr[i][j]-(2*i+j);
                 }
       	 
   		} 
   		for(int i=0;i<a;i++)
		{
              	 for(int j=0;j<b;j++)
                 {
                	cout<<*(*(arr+(i))+j)<<" ";
                 }
       	 cout<<"\n";
   		} 
   		break;
      default: cout<<"\nWrong Choice";
               break;
      
    }
}

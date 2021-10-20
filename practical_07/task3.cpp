#include<iostream>
using namespace std;



int main()
{
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int a=3,b=3;
    int c;
    cout<<"Enter your choice";
    cin>>c;
    switch(c)
    {
      case 1:  for(int i=a-1;i>=0;i--)
		{
              	 for(int j=b-1;j>=0;j--)
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
                	cout<<10-*(*(arr+(i))+j)<<" ";
                 }
       	 cout<<"\n";
   		}   
               
               break;
      case  3: for(int i=0;i<a;i++)
		{
              	 for(int j=0;j<b;j++)
                 {
                	arr[i][j]=10-*(*(arr+(i))+j);
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
      case  4:  int i,j;
                for( i=0;i<a;i++)
		{
              	 for(j=0;j<b;j++)
                 {
                	if(i==1&&j==1)
                	break;
                	int temp=arr[i][j];
                	arr[i][j]=arr[a-1-i][b-1-j];
                	arr[a-1-i][b-1-j]=temp;
                 }
                 if(i==1&&j==1)
                	break;
       	
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

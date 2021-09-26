#include<iostream>
using namespace std;
void prime(int n)
{
   int ctr=0;
   for(int i=2;i*i<n;i++)
   	if(n%i==0)
   		ctr++;
   if(ctr!=0)
   	cout<<" is not prime";
   else
   	cout<<" is prime";
   	
}
int main()
{
    int n;
    cout<<"Enter the size of array=";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
     cout<<"\nEnter the "<<i+1<<" element=";
     cin>>arr[i];
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<"\n"<<arr[i];
        prime(arr[i]);
    }
  }

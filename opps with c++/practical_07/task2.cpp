#include<iostream>
#include<ctime>
using namespace std;
int main()
{
   time_t ttime;
   ttime=time(NULL);
   char *tm = ctime(&ttime);
   
   int i;
   char month[6],year[6],day[6];
   for( i=0;i<3;i++)
   {
      day[i]=tm[i];
   }
   day[i]='\0';
   int k=0;
   for( i=4;i<7;i++)
   {
      month[k++]=tm[i];
   }
   month[k]='\0';
   k=0;
   for( i=20;i<24;i++)
   {
      year[k++]=tm[i];
   }
  year[k]='\0';
 
 
 cout<<"\nmain menu\n1.for current year\n2.current month\n3.Not applicable\n";
     int ch;
     cin>>ch;
     
     switch(ch)
     {
        case 1: cout<<"Year is="<<year;
        	break;
        case 2: cout<<"Month is="<<month;
        	break;
        case 3: cout<<"Day is="<<day;
        	break;
        case 4: cout<<"Not applicable";
        		break;
        default : cout<<"Wrong choice!!";
     }
     cout<<"\n";
  
}

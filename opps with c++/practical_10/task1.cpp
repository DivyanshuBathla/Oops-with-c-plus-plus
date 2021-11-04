#include<iostream>
#include<string>
using namespace std;
 class people
{
    string name;
    string add;
    string st_no;
    string mobile ;
    int counter;
    string head;
public:
    void get_name(string n)
    {
      name=n;
    }
    string set_name()
    {
        return(name);
    }

     void get_add(string n)
    {
      add=n;
    }
    string set_add()
    {
        return(add);
    }

  
    void get_head(string n)
    {
      head=n;
    }
    string set_head()
    {
        return(head);
    }
    
    void get_num(string s)
    {
        if(s[0]=='1'&&s[1]=='3'&&s[2]=='5')
        { 
        counter=1;
        st_no=s;
        }
        else{ 
        counter=0;
        mobile=s;
        }
        
    }
    string set_num()
    {
        if(counter==1)
        { 
           return(st_no);
        }
        else
        { 
         return(mobile);
        }
        
    }



};
int main(){
  int n;
  cout<<"\nEnter the number of peoples:";
  cin>>n;
  people *p=new people[n];
   string t;
  for(int i=0;i<n;i++)
  {
    
    cin>>t;
    cout<<"Enter the details of "<<i+1<<" person:\n";
    fflush(stdin);
    
    cout<<"\nEnter the name of person=";
    fflush(stdin);
    getline(cin,t);
    (*(p+i)).get_name(t);
    fflush(stdin);

    cout<<"\nEnter the add of person=";
    getline(cin,t);
    (*(p+i)).get_add(t);
    fflush(stdin);

    cout<<"\nEnter the mobile number of person=";
    getline(cin,t);
    (*(p+i)).get_num(t);
    fflush(stdin);

    cout<<"\nEnter the name of head of family=";
    getline(cin,t);
    (*(p+i)).get_head(t);
    fflush(stdin);

  }
  system("cls");
  for(int i=0;i<n;i++)
  {
    cout<<"The details of "<<i+1<<" person:";
    cout<<"\nThe name of person=";
    t=(*(p+i)).set_name();
    cout<<t;
    fflush(stdin);

    cout<<"\nEnter the add of person=";
     t=(*(p+i)).set_add();
    cout<<t;
    fflush(stdin);

    cout<<"\nEnter the mobile number of person=";
     t=(*(p+i)).set_num();
    cout<<t;
    fflush(stdin);

    cout<<"\nEnter the name of head of family=";
    t=(*(p+i)).set_head();
    cout<<t;
    fflush(stdin);
  }
}

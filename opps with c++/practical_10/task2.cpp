/*
DIFFERENCE BETWEEN STRUCT STUDENT AND CLASS COLLAGE

1.No concept of data hiding in structure
2.members can be asscessed directly in structure
3.Functions can be integreated in class along with datatypes
4.Structure stores in stack wheare as class store in heaps
5.Structure are value types wheareas class are reference types
*/ 






#include<string>
#include<iostream>
using namespace std;




class collage
{
    private:
    string name;
    int age;
    int year;
    char sec;
    int marks;
    public:
     void set_name(string s)
    {
        name=s;
    } 
    string get_name()
    {
        return(name);
    }
    void set_age(int a)
    {
        age=a;
    }
    int get_age()
    {
        return(age);
    }
    void set_year(int a)
    {
        year=a;
    }
    int get_year()
    {
        return(year);
    }
    void set_sec(char a)
    {
        sec=a;
    }
    char get_sec()
    {
        return(sec);
    }
    void set_marks(int a)
    {
        marks=a;
    }
    int get_marks()
    {
        return(marks);
     }

};

int main()
{
    
    int m;
    cout<<"Enter the number of students=";
    cin>>m;
    collage *s=new collage[m];
    
    string str;
    int n;
    char ch;
   
    for(int i=0;i<m;i++)
    {
        cout<<"\nEnter the "<<i+1<<" studnet information=";
        cout<<"\nEnter the name";
        //fflush(stdin);
        getline(cin,str);
        (*(s+i)).set_name(str);
       // fflush(stdin);
        cout<<"\nEnter the age=";
        cin>>n;
        (*(s+i)).set_age(n);
        cout<<"\nEnter the year=";
        cin>>n;
        (*(s+i)).set_year(n);
        cout<<"\nEnter the sec=";
        cin>>ch;
        fflush(stdin);
        (*(s+i)).set_sec(ch);
        cout<<"\nEnter the marks=";
        cin>>n;
        (*(s+i)).set_marks(n);
    }
    int total=0;
    system("cls");
    for(int i=0;i<m;i++)
    {
        cout<<"\nThe details of "<<i+1<<" student=";
        cout<<"\nThe name=";
        fflush(stdin);
        str=(*(s+i)).get_name();
        cout<<str;
        cout<<"\nThe age=";
        n=(*(s+i)).get_age();
        cout<<n;
        fflush(stdin);
        cout<<"\nThe year=";
        n=(*(s+i)).get_year();
        cout<<n;
         cout<<"\nThe sec is=";
        ch=(*(s+i)).get_sec();
        cout<<ch;
        cout<<"\nThe marks=";
        n=(*(s+i)).get_marks();
        cout<<n;
    }
}

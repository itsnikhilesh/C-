#include<iostream>
using namespace std;

  int sum(int , int );
  int sum(int ,int ,int );

  int main()
  {

    int a,b,c,xx,yy;
    
    cout<<"enter the first number :-";
    cin>>a;
    
    cout<<"enter second number :-";
    cin>>b;
    
    cout<<"enter third number :- ";
    cin>>c;

    xx=sum(a,b);
    cout<<endl<<"SUM OF TWO NUMBER :- "<<xx<<endl;
    yy=sum(a,b,c);
    cout<<"SUM OF THREE NUMBER :- "<<yy<<endl;
    return 0;
  }
  int sum(int x ,int y)
    {
      return(x+y);
    }
  int sum(int x, int y,int z)
    {

       return(x+y+z); 
    }  
    

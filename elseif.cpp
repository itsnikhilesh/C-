#include<iostream>
using namespace std;

int main()
{
    int marks;
    cout<<"Enter your marks to check Gread"<<endl;
    cin>>marks;

    if(marks>=60)
    {
        cout<<"First Division"<<endl;

    }
    else if(marks>=45)
    
    {
        if (marks<60)
        {
           cout<<"Second Division"<<endl;
        }
    }
    else if(marks>=30)
    {
        if(marks<45)
        {
            cout<<"Third Division"<<endl;
        }
    }
    else
    {
        cout<<"fail"<<endl;
    }
}
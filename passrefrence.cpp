#include<iostream>
using namespace std;

void swap(int &x,int &y)
{  
    int temp=x;
    x=y;
    y=temp;
cout<<x<<" "<<y<<endl;
}
int main()
{
    int x=9;
    int c=1;
    int &y=x;
    swap(x,c);
    return 0;
}

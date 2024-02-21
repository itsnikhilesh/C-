#include<iostream>
using namespace std;

int main()
{
    int arry[]={3,4,10,11};
    int size= sizeof(arry)/sizeof(arry[0]);
    int sum=0;
    for(int i=0;i<=size;i++)
     {
        sum=arry[i];
     }
     cout<<sum<<endl;
     return 0;
}
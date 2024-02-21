#include<iostream>
using namespace std;

int main()
{
   int arr[50];
   int pos,i,num;
   cout<<"enter the alement in array"<<endl;
   cin>>num;
   for(int i=0;i<num;i++)
   {
      cout<<"enter % d elements in array:"<<num;
   }
   
   for(i=0;i<num;i++)
   {
    cout<<"arr[%d]"<<i<<endl;
    cin>>arr[i];
   }
}
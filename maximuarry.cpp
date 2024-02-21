#include<iostream>
using namespace std;

int main()
{
    int arry[]={3,7,18,9,11};
    int max=arry[0];
    for(int i=0;i<5;i++)
      {
        if(arry[i]>max)
         {
            max=arry[i];
         }
      }
      cout<<max<<endl;
      return 0;
      
}
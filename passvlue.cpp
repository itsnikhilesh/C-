//pass by value

#include<iostream>
using namespace std;

void swap(int x,int y)
{

    int temp = x;
    x=y;
    y=temp;
    cout<<x<<" "<<y<<endl;

}
int main()
{

    int i=6,j=4;
    swap(i,j);
    return 0;
}
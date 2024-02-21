#include<iostream>
using namespace std;
void decreased(int a, int b)
{
  a--;
  b=b-2;
cout<<a<<" "<<b<<endl;

}
int main()
{
    int p=26;
    int q=13;
    decreased(p,q);
    cout<<p<<" "<<q<<endl;
    return 0;
}
#include<iostream>

using namespace std;
template<class T>
class Math
{
	T a,b;
	public:
		sum(T a , T b){
			T c = a + b;
			cout<<c<<endl;
		}
		sub(T a , T b){
			T c = a - b;
			cout<<c<<endl;
		}
		mul(T a , T b){
			T c = a * b;
			cout<<c<<endl;
	}
};
main(){
	Math<int>obj;
	obj.sum(5,3);
	obj.sub(5,3);
	obj.mul(5,3);
	
}
#include<iostream>
using namespace std;

//template 关键字告诉C++编译器 我要开始泛型了，不要随便报错
//数据类型T 参数化数据类型
template <typename T>
void myswap(T &a,T &b){
	T t;
	t=a;
	a=b;
	b=t;
} 
int main(){
	int x=1;
	int y=2;
	myswap(x,y);//自动数据类型 推导的方式
	
	float a=2.0;
	float b=3.0;

	
	myswap<float>(a,b);//显示类型调用

	cout<<a<<endl;
	cout<<x<<endl;
	return 0; 
}











#include<iostream>
using namespace std;

//template �ؼ��ָ���C++������ ��Ҫ��ʼ�����ˣ���Ҫ��㱨��
//��������T ��������������
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
	myswap(x,y);//�Զ��������� �Ƶ��ķ�ʽ
	
	float a=2.0;
	float b=3.0;

	
	myswap<float>(a,b);//��ʾ���͵���

	cout<<a<<endl;
	cout<<x<<endl;
	return 0; 
}











#include<iostream>
using namespace std;
int main()
{
	int x,a,b,c,d;
	cout<<"请输入四位同学的分数："; 
	cin>>a>>b>>c>>d;
	x=(a+b+c+d)/4;
	cout<<"4人平均分为："<<x<<endl;
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	char grade;
	cout<<"请输入您的代号:";
	cin>>grade;
	switch(grade)
	{
		case'A':cout<<"您的代号为:"<<grade<<'\t'<<"成绩为：88"<<endl; break;
		case'B':cout<<"您的代号为:"<<grade<<'\t'<<"成绩为：99"<<endl; break;
		case'C':cout<<"您的代号为:"<<grade<<'\t'<<"成绩为：55"<<endl; break;
		case'D':cout<<"您的代号为:"<<grade<<'\t'<<"成绩为：66"<<endl; break;
	}
	return 0;
}

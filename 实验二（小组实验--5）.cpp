#include<iostream>
using namespace std;
int main()
{
	char grade;
	cout<<"���������Ĵ���:";
	cin>>grade;
	switch(grade)
	{
		case'A':cout<<"���Ĵ���Ϊ:"<<grade<<'\t'<<"�ɼ�Ϊ��88"<<endl; break;
		case'B':cout<<"���Ĵ���Ϊ:"<<grade<<'\t'<<"�ɼ�Ϊ��99"<<endl; break;
		case'C':cout<<"���Ĵ���Ϊ:"<<grade<<'\t'<<"�ɼ�Ϊ��55"<<endl; break;
		case'D':cout<<"���Ĵ���Ϊ:"<<grade<<'\t'<<"�ɼ�Ϊ��66"<<endl; break;
	}
	return 0;
}

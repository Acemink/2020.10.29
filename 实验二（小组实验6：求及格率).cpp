#include<iostream>
using namespace std;
int main()
{
	int score1,score2,score3,score4;//Ĭ��60��Ϊ���������
	float m=0;
	cout<<"��������λͬѧ�ĳɼ���";
	cin>>score1>>score2>>score3>>score4; 
	if(score1>=60) m+=1;
	if(score2>=60) m+=1;
	if(score3>=60) m+=1;
	if(score4>=60) m+=1;
	cout<<"����λͬѧ�ļ�����Ϊ��"<<m/4*100.0<<"%"<<endl;
	return 0;
}

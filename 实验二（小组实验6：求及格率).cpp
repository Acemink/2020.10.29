#include<iostream>
using namespace std;
int main()
{
	int score1,score2,score3,score4;//默认60分为及格分数；
	float m=0;
	cout<<"请输入四位同学的成绩：";
	cin>>score1>>score2>>score3>>score4; 
	if(score1>=60) m+=1;
	if(score2>=60) m+=1;
	if(score3>=60) m+=1;
	if(score4>=60) m+=1;
	cout<<"这四位同学的及格率为："<<m/4*100.0<<"%"<<endl;
	return 0;
}

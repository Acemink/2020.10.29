#include<iostream>
using namespace std;
int main()
{
	
	cout<<"************************************************\n";
	cout<<"*    欢迎使用学生成绩管理系统1.1               *\n";
	cout<<"*高静彤、陈颖茵、王振宇 计算机2003班 2020.10.29*\n";
	cout<<"*     1、输入4个同学的代号和成绩               *\n";
	cout<<"*        显示4个同学的代号和成绩列表           *\n";
	cout<<"*     2、求4人平均分                           *\n";
	cout<<"*     3、求4人总分                             *\n";
	cout<<"*     4、查询某同学的分数                      *\n";
	cout<<"*     5、统计及格率                            *\n";
	cout<<"*     6、退出                                  *\n";
	cout<<"*   请输入(1-5)选择：                          *\n"; 
	cout<<"*                                              *\n";
	cout<<"************************************************\n";
	
	int need;
	cout<<"请从上面的1-5中选择您的服务需求(即输入序号):";
	cin>>need; 
	switch(need)
	{
		case 1:cout<<"您的服务需求是1：显示4个同学的代号和成绩列表"<<'\n'<<"请输入四位同学的代号和成绩:"<<endl;
		int score1,score2,score3,score4;
	char grade1,grade2,grade3,grade4;
	cin>>grade1>>score1>>grade2>>score2>>grade3>>score3>>grade4>>score4;
	cout<<"您的代号为:"<<grade1<<'\t'<<"您的成绩为："<<score1<<endl;
	cout<<"您的代号为:"<<grade2<<'\t'<<"您的成绩为："<<score2<<endl;
	cout<<"您的代号为:"<<grade3<<'\t'<<"您的成绩为："<<score3<<endl;
	cout<<"您的代号为:"<<grade4<<'\t'<<"您的成绩为："<<score4<<endl;
	break;
	
	case 2:cout<<"您的服务需求是2：求4人平均分 "<<'\n'<<"请输入四位同学的成绩："<<endl;
	int x,a,b,c,d; 
	cin>>a>>b>>c>>d;
	x=(a+b+c+d)/4;
	cout<<"4人平均分为："<<x<<endl;
	break;
	
	case 3:cout<<"您的服务需求是3:求4人总分"<<'\n'<<"请输入四位同学的成绩："<<endl;
	int y,e,f,g,h;
	cin>>e>>f>>g>>h;
	y=e+f+g+h;
	cout<<"4人总分为："<<y<<endl;
	break;
	
	case 4:cout<<"您的服务需求是4：查询某同学的分数"<<'\n'<<"请输入您的代号："<<endl;
	char grade;
	cin>>grade;
	switch(grade)
	{
		case'A':cout<<"您的代号为:"<<grade<<'\t'<<"成绩为：88"<<endl; break;
		case'B':cout<<"您的代号为:"<<grade<<'\t'<<"成绩为：99"<<endl; break;
		case'C':cout<<"您的代号为:"<<grade<<'\t'<<"成绩为：55"<<endl; break;
		case'D':cout<<"您的代号为:"<<grade<<'\t'<<"成绩为：66"<<endl; break;
	}
	break;
	
	case 5:cout<<"您的服务需求是5:统计及格率 "<<'\n'<<"请输入四位同学的成绩："<<endl;
	int score5,score6,score7,score8;//默认60分为及格分数；
	float m=0;
	cin>>score5>>score6>>score7>>score8; 
	if(score5>=60) m+=1;
	if(score6>=60) m+=1;
	if(score7>=60) m+=1;
	if(score8>=60) m+=1;
	cout<<"这四位同学的及格率为："<<m/4*100.0<<"%"<<endl;
	break;
	 } 
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	
	cout<<"************************************************\n";
	cout<<"*    ��ӭʹ��ѧ���ɼ�����ϵͳ1.1               *\n";
	cout<<"*�߾�ͮ����ӱ�������� �����2003�� 2020.10.29*\n";
	cout<<"*     1������4��ͬѧ�Ĵ��źͳɼ�               *\n";
	cout<<"*        ��ʾ4��ͬѧ�Ĵ��źͳɼ��б�           *\n";
	cout<<"*     2����4��ƽ����                           *\n";
	cout<<"*     3����4���ܷ�                             *\n";
	cout<<"*     4����ѯĳͬѧ�ķ���                      *\n";
	cout<<"*     5��ͳ�Ƽ�����                            *\n";
	cout<<"*     6���˳�                                  *\n";
	cout<<"*   ������(1-5)ѡ��                          *\n"; 
	cout<<"*                                              *\n";
	cout<<"************************************************\n";
	
	int need;
	cout<<"��������1-5��ѡ�����ķ�������(���������):";
	cin>>need; 
	switch(need)
	{
		case 1:cout<<"���ķ���������1����ʾ4��ͬѧ�Ĵ��źͳɼ��б�"<<'\n'<<"��������λͬѧ�Ĵ��źͳɼ�:"<<endl;
		int score1,score2,score3,score4;
	char grade1,grade2,grade3,grade4;
	cin>>grade1>>score1>>grade2>>score2>>grade3>>score3>>grade4>>score4;
	cout<<"���Ĵ���Ϊ:"<<grade1<<'\t'<<"���ĳɼ�Ϊ��"<<score1<<endl;
	cout<<"���Ĵ���Ϊ:"<<grade2<<'\t'<<"���ĳɼ�Ϊ��"<<score2<<endl;
	cout<<"���Ĵ���Ϊ:"<<grade3<<'\t'<<"���ĳɼ�Ϊ��"<<score3<<endl;
	cout<<"���Ĵ���Ϊ:"<<grade4<<'\t'<<"���ĳɼ�Ϊ��"<<score4<<endl;
	break;
	
	case 2:cout<<"���ķ���������2����4��ƽ���� "<<'\n'<<"��������λͬѧ�ĳɼ���"<<endl;
	int x,a,b,c,d; 
	cin>>a>>b>>c>>d;
	x=(a+b+c+d)/4;
	cout<<"4��ƽ����Ϊ��"<<x<<endl;
	break;
	
	case 3:cout<<"���ķ���������3:��4���ܷ�"<<'\n'<<"��������λͬѧ�ĳɼ���"<<endl;
	int y,e,f,g,h;
	cin>>e>>f>>g>>h;
	y=e+f+g+h;
	cout<<"4���ܷ�Ϊ��"<<y<<endl;
	break;
	
	case 4:cout<<"���ķ���������4����ѯĳͬѧ�ķ���"<<'\n'<<"���������Ĵ��ţ�"<<endl;
	char grade;
	cin>>grade;
	switch(grade)
	{
		case'A':cout<<"���Ĵ���Ϊ:"<<grade<<'\t'<<"�ɼ�Ϊ��88"<<endl; break;
		case'B':cout<<"���Ĵ���Ϊ:"<<grade<<'\t'<<"�ɼ�Ϊ��99"<<endl; break;
		case'C':cout<<"���Ĵ���Ϊ:"<<grade<<'\t'<<"�ɼ�Ϊ��55"<<endl; break;
		case'D':cout<<"���Ĵ���Ϊ:"<<grade<<'\t'<<"�ɼ�Ϊ��66"<<endl; break;
	}
	break;
	
	case 5:cout<<"���ķ���������5:ͳ�Ƽ����� "<<'\n'<<"��������λͬѧ�ĳɼ���"<<endl;
	int score5,score6,score7,score8;//Ĭ��60��Ϊ���������
	float m=0;
	cin>>score5>>score6>>score7>>score8; 
	if(score5>=60) m+=1;
	if(score6>=60) m+=1;
	if(score7>=60) m+=1;
	if(score8>=60) m+=1;
	cout<<"����λͬѧ�ļ�����Ϊ��"<<m/4*100.0<<"%"<<endl;
	break;
	 } 
	return 0;
}

#include <iostream>
using namespace std;

int  main()
{
	char  op;  
	int  num1, num2, result;
	string s;
	loop:cout<<"请问您要计算吗？Yes or No?"<<endl;
	cin>>s;
	if(s=="Yes")
	{
			cin >> num1 >> op >> num2;             // A 
	switch (op)
	{  
		case '+' : result =num1+num2; break;
		case '-' : result =num1-num2; break;
		case '*' : result =num1*num2; break;
		case '/' : result =num1/num2; break;
		default: cout << "运算符非法." << endl;
	} 
	cout << num1 << op << num2 << "=" << result << endl;
	goto loop;
	}
	else return 0;
	return 0;
}

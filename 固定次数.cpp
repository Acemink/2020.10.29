#include <iostream>
using namespace std;

int  main()
{
	char  op;  
	int  num1, num2, result,i;
	for(i=3;i>0;i--)  //固定次数为3； 
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
	}
	return 0;
}

#include <iostream>
using namespace std;

int  main()
{
	char  op;  
	int  num1, num2, result,i;
	cin>>i;
	for(i;i>0;i--)
	{
		cin >> num1 >> op >> num2;             // A 
		if(num1==3||num2==7) break;
		else
		{
			switch (op)
	{  
		case '+' : result =num1+num2; break;
		case '-' : result =num1-num2; break;
		case '*' : result =num1*num2; break;
		case '/' : result =num1/num2; break;
		default: cout << "ÔËËã·û·Ç·¨." << endl;
	} 
	
	cout << num1 << op << num2 << "=" << result << endl;
		}
	}
	return 0;
}

#include <iostream>
#include <stdlib.h> 
#include <time.h>  
using namespace std;
int main() 
{
	 int a,b,c;
 	srand((unsigned)time(NULL));
  a=rand();
  b=rand();
  cout<<a<<"+"<<b<<"=?\n";
  cout<<"Please input your answer:";
  cin>>c;
  cout <<"The right answer is:"<<a<<"+"<<b<<"="<< a+b <<endl;
  cout <<"Your answer is     :"<<a<<"+"<<b<<"="<< c <<endl;
  if(c==a+b) cout<<"恭喜您，您的答案是正确的!"<<endl; 
  else if(c>a+b)
  cout<<"很遗憾，您的答案是错误的,您的答案偏大了。"<<endl;
  else
  cout<<"很遗憾，您的答案是错误的,您的答案偏小了。"<<endl;  
 	return 0;
}

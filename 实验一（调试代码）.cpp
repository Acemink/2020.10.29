//a+b=?
#include <iostream>
#include <stdlib.h> 
#include <time.h>  
using namespace std;
int main() 
 { int a,b,c;
 	srand((unsigned)time(NULL));
  a=rand();
  b=rand();
  cout<<a<<"+"<<b<<"=?\n";
  cout<<"Please input your answer:";
  cin>>c;
  cout <<"The right answer is:"<<a<<"+"<<b<<"="<< a+b <<endl;
  cout <<"Your answer is     :"<<a<<"+"<<b<<"="<< c <<endl;
 	return 0;
}

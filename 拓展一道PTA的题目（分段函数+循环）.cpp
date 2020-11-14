#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float x,result;
	int i;
	for(i=4;i>0;i--)
	{
		cin>>x;
	    if(x!=0) result=1/x;
	    else result=0;
	    cout<<setiosflags(ios::fixed)<<setprecision(1)<<"f("<<x<<")"<<" "<<"="<<" "<<result<<endl;
	}
	return 0;
}

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int k,n,w;
	cin>>k>>n>>w;
	int sum=0;
	for(int i=1;i<=w;i++)
	{
		sum+=i*k;
	}
	if(sum>n)
	{
		cout<<abs(sum-n);
	}
	else
	{
		cout<<"0"<<endl;
	}
	return 0;
	
	
}

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int k,n;
	cin>>n>>k;
	int sum;
	k=240-k;
	int count=0;
	for(int i=1;i<=n;i++)
	{
		sum+=i*5;
		if(sum>k)
		{
			break;
		}
		count++;
	}
	cout<<count<<"\n";
	return 0;
	
	
}

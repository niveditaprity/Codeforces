#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int s1=(1<<n),s2=0;
	    for(int i=1;i<n/2;i++)
	    {
	        s1+=(1<<i);
	    }
	    for(int i=n/2;i<n;i++)
	    {
	        s2+=(1<<i);
	    }
	    cout<<abs(s1-s2)<<endl;
	}
	return 0;
}

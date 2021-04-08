#include <bits/stdc++.h>
using namespace std;


int main() {
	long long int n;
	cin>>n;
	int count=0;
	while(n>0)
	{
	    int r=n%10;
	    if(r==4||r==7)
	    {
	   count++;
	    }
	    n=n/10;
	}
	if(count==4||count==7)
	{
	        cout<<"YES"<<endl;
	}
	else
	{
	    cout<<"NO"<<endl;
	}
	return 0;
}

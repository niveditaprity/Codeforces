#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(a==0)
    {
        return b;
    }
    if(b==0)
    {
        return a;
    }
    return __gcd(a, b);
}
int main() {
	int a,b,n;
	cin>>a>>b>>n;
	int su=0,an=0;
	while(true)
	{
	    n-=gcd(a,n);
	    if(n==0)
	    {
	        cout<<0<<endl;
	        break;
	    }
	    n-=gcd(b,n);
	    if(n==0)
	    {
	        cout<<1<<endl;
	        break;
	    }
	}

	return 0;
}

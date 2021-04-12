#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    if(n==k)
	    {
	        cout<<1<<endl;
	    }
	    else if(n==1)
	    {
	        cout<<k<<endl;
	    }
	   else if(k>n)
	    {
	        int x=k/n;
	        int y=k%n;
	        if(y!=0)
	        {
	            x++;
	        }
	        cout<<x<<endl;
	    }
	    else
	    {
	        int a=n/k;
	        int b=n%k;
	        if(b!=0)
	        {
	            a++;
	        }
	        k=k*a;
	       int x=k/n;
	        int y=k%n;
	        if(y!=0)
	        {
	            x++;
	        }
	        cout<<x<<endl; 
	    }
	}
	return 0;
}

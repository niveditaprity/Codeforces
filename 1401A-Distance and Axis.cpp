#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int ans;
	    if(k>n)
	    {
	        ans=k-n;
	    }
	   else
	   {
	       if(n&1)
	       {
	           ans=(k&1)?0:1;
	       }
	       else
	       {
	           ans=!(k&1)?0:1;
	       }
	   }
	   cout<<ans<<endl;
	}
	return 0;
}

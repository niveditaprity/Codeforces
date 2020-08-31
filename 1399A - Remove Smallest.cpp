#include <bits/stdc++.h>
using namespace std;
void solve(int a[],int n)
{
 sort(a,a+n);
	    for(int i=0;i<n-1;i++)
	    {
	        if(abs(a[i]-a[i+1])<=1)
	        {
	          continue;
	        }
	        else
	        {
	            cout<<"NO"<<endl;
	          return;
	        }
	    }
	    cout<<"YES"<<endl;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	      cin>>a[i];  
	    }
	    solve(a,n);
	}
	return 0;
}

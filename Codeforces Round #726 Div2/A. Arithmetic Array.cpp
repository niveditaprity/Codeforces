#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    int sum=0;
	    for(int i=0;i<n;i++)
	    {
	        sum+=arr[i];
	    }
	    if(sum/n==1&&sum%n==0)
	    {
	        cout<<0<<"\n";
	    }
	   else if(sum>0&&sum>n)
	    {
	      cout<<sum-n<<"\n";  
	    }
	    else
	    {
	        cout<<1<<"\n";
	    }
	}
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	int count=0;
	int m=0;
	for(int i=1;i<n;i++)
	{
	    if(arr[i]>=arr[i-1])
	    {
	        count++;
	    }
	    else
	    {
	        m=max(m,count);
	        count=0;
	    }
	}
	if(count>m)
	{
	    cout<<count+1<<endl;
	}
	else
	{
	    cout<<m+1<<endl;
	}
	return 0;
	}

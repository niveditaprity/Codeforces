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
	    sort(arr,arr+n);
	    int diff=INT_MAX;
	    int k,j;
	    for(int i=0;i<n-1;i++)
	    {
	        if(arr[i+1]-arr[i]<diff)
	        {
	           j=i;
	           k=i+1;
	           diff=arr[i+1]-arr[i];
	        }
	    }
	    cout<<arr[j]<<" ";
	    for(int i=k+1;i<n;i++)
	    {
	        cout<<arr[i]<<" ";
	    }
	    for(int i=0;i<j;i++)
	    {
	        cout<<arr[i]<<" ";
	    }
	    cout<<arr[k];
	    cout<<"\n";
	}
	return 0;
}

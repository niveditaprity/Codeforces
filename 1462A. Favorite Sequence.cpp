#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;
	int arr[n+1];
	for(int i=1;i<=n;i++)
	{
	   cin>>arr[i];
	}
for(int i=1;i<=n/2;i++)
        {
    
    
            cout<<arr[i]<<' ';
            cout<<arr[n-i+1]<<' ';
        }
        if(n&1)
         cout<<arr[n/2+1]<<endl;
        else
           cout<<endl;
	

	}
	return 0;
}

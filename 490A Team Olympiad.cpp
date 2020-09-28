#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,x1[5000],y1[5000],z1[5000];
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	int t1=0,t2=0,t3=0,w;
	for(int i=0;i<n;i++)
	{
	    if(arr[i]==1)
	    {
	        x1[t1]=i+1;
	         t1++;
	    }
	    
	    if(arr[i]==2)
	    {
	        y1[t2]=i+1;
	        t2++;
	    }
	    
	    if(arr[i]==3)
	    {

	        z1[t3]=i+1;
	        t3++;
	    }
	}
	int s=min(t1,t2);
	w=min(s,t3);
	cout<<w<<endl;
	for(t1=0,t2=0,t3=0;t1<w,t2<w,t3<w;t1++,t2++,t3++)
	{
	    cout<<x1[t1]<<" "<<y1[t2]<<" "<<z1[t3]<<endl;
	}
	return 0;
}

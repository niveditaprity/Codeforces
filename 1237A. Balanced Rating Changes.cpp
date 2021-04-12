#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    bool count=true;
    vector<int>v(t);
	for(int i=0;i<t;i++)
	{
	   int n;
	   cin>>n;
        if(n&1)
        {
	       if(count==false)
	       {
	           v[i]=floor((double)n/2);
	       }
	       else
	       {
	           v[i]=ceil((double)n/2);
	       }
	       count^=1;
	   }
	   else
	   {
	       v[i]=n/2;
	   }
	}
	for(int i=0;i<t;i++)
	{
		cout<<v[i]<<"\n";
		}
	return 0;
}

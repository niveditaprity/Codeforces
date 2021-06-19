#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m,x,y;
	    cin>>n>>m>>x>>y;
	    if(x==1&&y==1 || x==n && y==m)
	    {
	       cout<<n<<" "<<1<<" "<<1<<" "<<m<<"\n";
	    }
	    else{
	       cout<<1<<" "<<1<<" "<<n<<" "<<m<<"\n"; 
	    }
	}
	return 0;
}

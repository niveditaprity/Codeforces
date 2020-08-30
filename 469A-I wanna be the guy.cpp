#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,x,y;
	cin>>n;
	set<int>s;
	cin>>x;
	for(int i=0;i<x;i++)
	{
	    int p;
	    cin>>p;
	    s.insert(p);
	}
	cin>>y;
	for(int i=0;i<y;i++)
	{
	    int q;
	    cin>>q;
	    s.insert(q);
	}
	int d=s.size();
	if(n==d)
	{
	    cout<<"I become the guy."<<endl;
	}
	else
	{
	    cout<<"Oh, my keyboard!"<<endl;
	}
	return 0;
}

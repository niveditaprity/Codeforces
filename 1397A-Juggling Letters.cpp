#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    unordered_map<char,int>mp;
	    for(int i=0;i<n;i++)
	    {
	        string s;
	        cin>>s;
	        for(int j=0;j<s.size();j++)
	        {
	            mp[s[j]]++;
	        }
	    }
	    int flag=0;
	    for(auto x:mp)
	    {
	        if(x.second%n==0)
	        {
	            flag=1;
	        }
	        else
	        {
	            flag=0;
	            break;
	        }
	    }
	    if(flag==0)
	    {
	        cout<<"NO"<<endl;
	        
	    }
	    else
	    {
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}

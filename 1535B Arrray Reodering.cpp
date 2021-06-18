#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (!a || !b)
        return a | b;
    unsigned shift = __builtin_ctz(a | b);
    a >>= __builtin_ctz(a);
    do {
        b >>= __builtin_ctz(b);
        if (a > b)
            swap(a, b);
        b -= a;
    } while (b);
    return a << shift;
}
int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    vector<int>even;
	    vector<int>odd;
	    vector<int>v;
	    int n;
	    cin>>n;
	    while(n--)
	    {
	        int val;
	        cin>>val;
	        if(val%2==0)
	        {
	            even.push_back(val);
	        }
	        else
	        {
	            odd.push_back(val);
	        }
	        
	    }
	    for(int i=0;i<even.size();i++)
	    {
	        v.push_back(even[i]);
	    }
	    for(int j=0;j<odd.size();j++)
	    {
	        v.push_back(odd[j]);
	    }
	    int count=0;
	    for(int i=0;i<v.size();i++)
	    {
	        for(int j=i+1;j<v.size();j++)
	        {
	            if(gcd(v[i],2*v[j])>1)
	            {
	                count++;
	            }
	        }
	    }
	    cout<<count<<"\n";
	}
	    
	    
	return 0;
}

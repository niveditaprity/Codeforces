#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a,b;
    double price,mn=10000000;

    for(int i=0;i<n;i++){
        cin>>a>>b;
        price=a/double(b);
        if(price<mn)
         mn=price;
    }
    price=m*mn;
    printf("%.8lf\n",price);
    return 0;
}

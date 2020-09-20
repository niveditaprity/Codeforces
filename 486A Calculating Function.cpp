#include <iostream>
using namespace std;

int main() {
	long long n;
	cin>>n;
	if(n&1)
		cout<<-((n+1)>>1);
		else cout<<(n>>1);

 	return 0;
}

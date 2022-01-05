#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll no;
	cin >> no;
	set<ll>s;
	
	for(ll i=0;i<no;i++)
	{
		ll u;
		cin >> u;
		s.insert(u);

		if(s.size()>10)
		{
			s.erase(s.begin());
		}
	
	}
    set<ll>::iterator it;
	for(it=s.begin();it!=s.end();it++)
		cout << (*it) << " ";
}

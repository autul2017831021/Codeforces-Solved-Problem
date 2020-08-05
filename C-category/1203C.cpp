#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll>d;
void printDivisors(ll n)
{
	for (ll i=1; i<=sqrt(n); i++)
	{
		if (n%i == 0)
		{
			if (n/i == i)
				d.push_back(i);
			else
            {
                d.push_back(i);
                d.push_back(n/i);
            }
		}
	}
	cout<<d.size()<<endl;
}
main()
{
    ll n;
    cin>>n;
    vector<ll>v;
    ll x,g=0;
    for(ll i=0;i<n;i++)
    {
        cin>>x;
        g=__gcd(x,g);
    }
    printDivisors(g);

}

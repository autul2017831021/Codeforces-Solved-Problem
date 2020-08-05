#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
int main()
{

    long long n,c=0,k,t=0;
	cin>>n;
	if(n==0)
    {
        cout<<"0";return 0;
    }
	while(1)
	{
		t=n,k=0;
		while(1)
		{
			k=max(k,t%10);
			///cout<<"k:"<<k<<endl;
			t=t/10;
			///cout<<"t:"<<t<<endl;
			if(t==0)
                break;
		}
		n=n-k;
		///cout<<"n:"<<n<<endl;
		c++;
		if(n==0)
            break;

	}
    cout<<c;
}

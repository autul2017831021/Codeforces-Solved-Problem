#include<bits/stdc++.h>
using namespace std;
main()
{
    int a,b,c,d,r;
    cin>>a>>b>>c>>d;
    r=((a^b)&(c|d))^((b&c)|(a^d));
    cout<<r<<endl;
}

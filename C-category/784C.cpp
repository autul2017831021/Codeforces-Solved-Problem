#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    vector<int>v;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int a=*max_element(v.begin(),v.end());
    int b=v[n-1];
    int xr = a ^ b;
    cout<<xr<<endl;
}

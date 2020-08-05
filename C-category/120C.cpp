#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,k,an=0;
    vector<pair<int,int> >v;
    freopen("input.txt","r",stdin);
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back({x,0});
    }
    sort(v.rbegin(),v.rend());
    for(int i=0;i<n;i++)
    {
        if(3*k<=v[i].first)
        {
            an+=v[i].first-3*k;
        }
        else if(2*k<=v[i].first)
        {
            an+=v[i].first-2*k;
        }
        else if(k<=v[i].first)
        {
            an+=v[i].first-k;
        }
        else
        {
            an+=v[i].first;
        }
    }
    freopen("output.txt","w",stdout);
    cout<<an<<endl;
}

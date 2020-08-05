    #include<bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    ll lcm(ll a,ll b)
    {
        return (a*b)/(__gcd(a,b));
    }

    main()
    {
        ll n;
        cin>>n;
        vector<ll>v;
        set<ll>s;
        for(ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            s.insert(x);
        }
        set<ll>::iterator it;
        for(it=s.begin();it!=s.end();it++)
        {
            v.push_back((*it));
        }
        sort(v.begin(),v.end());
        for(ll i=0;i<v.size();i++)
        {
            while(v[i]%2==0)
                v[i]/=2;
            while(v[i]%3==0)
                v[i]/=3;
        }
        for(ll i=1;i<v.size();i++)
        {
            if(v[i]!=v[0])
            {
                cout<<"NO";return 0;
            }
        }
        cout<<"YES";return 0;
    }

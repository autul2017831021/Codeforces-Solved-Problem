    #include<bits/stdc++.h>
    #include<math.h>
    using namespace std;
    typedef long long int ll;
    main()
    {
        ll n,a,b,k,g,c=0,s=0,r,j=0;
        bool flag=0;
        cin>>n>>a>>b>>k;
        s=a+b;
        pair<ll,ll>p[100000];
        vector<ll>v;
        while(n--)
        {
           cin>>g;
           ///cout<<g%s<<endl;
           if(g<=a)
            c++;
           else if(g%s<=a && g%s!=0)
            c++;
           else if(g%s==0)
           {
               double aa,dd,gg,bb,ss;
               gg=g;
               aa=a;
               bb=b;
               ss=aa+bb;
               dd=gg/ss;
               dd=dd-1;
               dd=dd*ss+aa;
               dd=gg-dd;
               dd=ceil(dd/aa);
               ll bal=dd;
               //cout<<bal<<" "<<g<<endl;
               v.push_back(bal);
           }
           else
           {
               double aa,dd,gg,bb,ss;
               ll d;
               gg=g;
               aa=a;
               bb=b;
               ss=aa+bb;
               d=g%s;
               dd=d;
               dd=dd-aa;
               dd=ceil(dd/aa);
               ll bal=dd;
               //cout<<bal<<" "<<g<<endl;
               v.push_back(bal);
           }

        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            if(k-v[i]<0)
                break;
            c++;
            k=k-v[i];
        }
        cout<<c<<endl;
    }

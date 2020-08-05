    #include<bits/stdc++.h>
    using namespace std;
    main()
    {
        int n,c=1;;
        cin>>n;
        vector<int>v;
        bool f[150001];
        for(int i=0;i<=150000;i++)
            f[i]=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        v[0]+=1;
        f[v[0]]=1;
        for(int i=1;i<n;i++)
        {
            if(f[v[i]+1]==0)
            {
                f[v[i]+1]=1;
                v[i]+=1;
                c++;
            }
            else if(f[v[i]]==0)
            {
                f[v[i]]=1;
                c++;
            }
            else if(f[v[i]-1]==0 && v[i]-1>0)
            {
                f[v[i]-1]=1;
                v[i]-=1;
                c++;
            }

        }
        cout<<c<<endl;
    }

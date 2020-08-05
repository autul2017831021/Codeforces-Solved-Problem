    using namespace std;
    #include<bits/stdc++.h>
    typedef long long int ll;
    typedef double dl;
    #define pb push_back
    #define bg begin()
    #define en end()
    #define rbg rbegin()
    #define ren rend()
    #define sz size()
    #define r0 return 0
    #define F first
    #define S second
    main()
    {
        int n,k,s=0;
        cin>>n>>k;
        int a[n][n]={0};
        k--;
        int last=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(j<k)
                {
                    a[i][j]=last+1;
                    last=a[i][j];
                }
                else
                    break;
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=k;j<n;j++)
            {
                a[i][j]=last+1;
                last=a[i][j];
            }
        }
        for(int i=0;i<n;i++)
        {
            s=s+a[i][k];
        }
        cout<<s<<endl;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                cout<<a[i][j]<<" ";
            cout<<endl;
        }
    }

    #include<bits/stdc++.h>
    using namespace std;
    bool isPalindrome(string s)
    {
        int l=s.size();
        for(int i=0;i<l;i++)
        {
            if(s[i]!=s[l-i-1])
                return false;
        }
        return true;
    }
    main()
    {
        string s;
        cin>>s;
        bool f=1;
        if(s.size()==1)
        {
            if(s[0]=='7' || s[0]=='3')
            {
                cout<<"YES";return 0;
            }
            else
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='4')
                s[i]='6';
            else if(s[i]=='5')
                s[i]='9';
            else if(s[i]=='0')
                s[i]='8';
            else if(s[i]=='2' || s[i]=='1')
                f=0;
        }
        ///cout<<s<<endl;
        if(f)
        {
            if(isPalindrome(s))
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }


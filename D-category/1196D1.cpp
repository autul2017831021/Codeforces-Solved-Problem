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
#define inf 99999999
char a[3]={'R','G','B'};
char b[3]={'G','B','R'};
char c[3]={'B','R','G'};
main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,k,an=inf;
        string s;
        cin>>n>>k>>s;
        if(k==1)
        {
            cout<<"0"<<endl;
            continue;
        }
        for(int i=0;i<n-k+1;i++)
        {
            int ak,bk,ck;
            for(int ij=0;ij<3;ij++)
            {
                if(ij==0)
                {
                    ak=0;
                    string aa=s.substr(i,k);
                    //cout<<aa<<" ";
                    for(int j=0;j<aa.sz;j++)
                    {
                        if(aa[j]!=a[j%3])
                            ak++;
                        //cout<<a[j%3];
                    }
                    an=min(an,ak);
                    //cout<<" ak->"<<ak<<endl;
                    ak=0;
                }
                else if(ij==1)
                {
                    bk=0;
                    string bb=s.substr(i,k);
                    //cout<<bb<<" ";
                    for(int j=0;j<bb.sz;j++)
                    {
                        if(bb[j]!=b[j%3])
                            bk++;
                        //cout<<b[j%3];
                    }
                    an=min(an,bk);
                    //cout<<" bk->"<<bk<<endl;
                    bk=0;
                }
                else
                {
                    ck=0;
                    string cc=s.substr(i,k);
                    //cout<<cc<<" ";
                    for(int j=0;j<cc.sz;j++)
                    {
                        if(cc[j]!=c[j%3])
                            ck++;
                        //cout<<c[j%3];
                    }
                    an=min(an,ck);
                    //cout<<" ck->"<<ck<<endl;
                    ck=0;
                }
            }
            //cout<<"ans->"<<an<<endl;
            //cout<<endl;
        }
        cout<<an<<endl;
    }
}


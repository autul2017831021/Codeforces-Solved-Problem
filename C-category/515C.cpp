#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define bg begin()
#define en end()
#define sz size()
int main() {
	int m;
	string n;
	cin>>m>>n;
	vector<int>v;
	for(int i=0;i<m;i++)
    {
        char r=n[i];
        if(n[i]=='2')
        {
            v.pb(2);
        }
        else if(n[i]=='3')
            v.pb(3);
        else if(n[i]=='5')
            v.pb(5);
        else if(n[i]=='7')
            v.pb(7);
        else if(n[i]=='4')
        {
            v.pb(3);
            v.pb(2);
            v.pb(2);
        }
        else if(n[i]=='6')
        {
            v.pb(5);
            v.pb(3);
        }
        else if(n[i]=='8')
        {
            v.pb(7);
            v.pb(2);
            v.pb(2);
            v.pb(2);
        }
        else if(n[i]=='9')
        {
            v.pb(7);
            v.pb(3);
            v.pb(3);
            v.pb(2);
        }
    }
    sort(v.bg,v.en);
    reverse(v.bg,v.en);
    for(int i=0;i<v.sz;i++)
        cout<<v[i];
}


#include <bits/stdc++.h>
#define fi first
#define se second
using namespace std;
typedef long long ll;
vector<ll>nn(1000021);
bool check(string sss,string ttt)
{
    bool o=false;
    for(ll i=1;i<ttt.size();i++)
    {
        ll d=0;
        ll m=i,n=0;
        while(sss[n]==ttt[m])
        {
            d++,n++,m++;
            if(m==ttt.size()) m=0;
            if(d==ttt.size()) break;
        }
        if(d==ttt.size())
        {
            o=true;
            break;
        }
    }
    if(o) return true;
    else return false;
}
void solve() {
    string s,t;
    s.clear();
    t.clear();
    ll x;
    cin>>x;
    while(x--)
    {
        ll a,b;
        string ss;
        cin>>a;
        cin>>ss;
        cin>>b;
        while(b--)
        {
            s+=ss;
        }
        //cout<<s<<" ";
    }
    ll y;
    cin>>y;
    while(y--)
    {
        ll a,b;
        string tt;
        cin>>a;
        cin>>tt;
        cin>>b;
        while(b--)
        {
            t+=tt;
        }
        //cout<<t<<" ";
    }
    string tre=t;
    reverse(t.begin(),t.end());
    //cout<<t;
    if(t.size()==s.size())
    {
        if(check(s,t) || s==t || check(s,tre) || s==tre) cout<<"CO\n";
        else cout<<"KHONG\n";
    }
    else cout<<"KHONG\n";
    cout<<s.size()<<" "<<t.size();
    //cout<<'\n'<<s<<'\n'<<t;
    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    if(fopen("DAQUY.inp","r"))
    {
    freopen("DAQUY.inp","r",stdin);
    freopen("DAQUY.out","w",stdout);
    }
    solve();
//---writer---
}
/*
▓██   ██▓ █    ██  ███▄ ▄███▓▓█████   ██████ ▓█████  ██ ▄█▀▄▄▄       ██▓
▒██  ██▒ ██  ▓██▒▓██▒▀█▀ ██▒▓█   ▀ ▒██    ▒ ▓█   ▀  ██▄█▒▒████▄    ▓██▒
▒██ ██░▓██  ▒██░▓██    ▓██░▒███   ░ ▓██▄   ▒███   ▓███▄░▒██  ▀█▄  ▒██▒
░ ▐██▓░▓▓█  ░██░▒██    ▒██ ▒▓█  ▄   ▒   ██▒▒▓█  ▄ ▓██ █▄░██▄▄▄▄██ ░██░
░ ██▒▓░▒▒█████▓ ▒██▒   ░██▒░▒████▒▒██████▒▒░▒████▒▒██▒ █▄▓█   ▓██▒░██░
██▒▒▒ ░▒▓▒ ▒ ▒ ░ ▒░   ░  ░░░ ▒░ ░▒ ▒▓▒ ▒ ░░░ ▒░ ░▒ ▒▒ ▓▒▒▒   ▓▒█░░▓  
▓██ ░▒░ ░░▒░ ░ ░ ░  ░      ░ ░ ░  ░░ ░▒  ░ ░ ░ ░  ░░ ░▒ ▒░ ▒   ▒▒ ░ ▒ ░
▒ ▒ ░░   ░░░ ░ ░ ░      ░      ░   ░  ░  ░     ░   ░ ░░ ░  ░   ▒    ▒ ░
░ ░        ░            ░      ░  ░      ░     ░  ░░  ░        ░  ░ ░ 
░ ░
*/
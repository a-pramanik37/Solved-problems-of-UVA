#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long int
#define inf 2000000000
#define pi (2.0*acos(0.0))
#define vsort(v)   sort(v.begin(),v.end())
#define ull unsigned long long int
#define mem(a, b) memset(a, b, sizeof a)
#define cf 100009
ll a[cf], tr[3*cf];

void build(ll node, ll s, ll e)
{
    if(s==e){
        tr[node]=a[s];
        return;
    }

    ll mid = (s+e)/2;
    build(node*2, s, mid);
    build((node*2)+1, mid+1, e);
    tr[node]=tr[node*2]*tr[(node*2)+1];
}

void update(ll node, ll s, ll e, ll ind, ll val)
{
    if(ind<s || ind>e)return;
    if(s==e){
        tr[node]=val;
        return;
    }

    ll mid = (s+e)/2;

    update(node*2, s, mid, ind, val);
    update(node*2+1, mid+1, e, ind, val);

    tr[node]=tr[node*2]*tr[(node*2)+1];

}

ll query(ll node, ll s, ll e, ll l, ll r)
{
    if(l>e || r<s)return 1;

    if(s>=l && e<= r){
        return tr[node];
    }

    ll mid = (s+e)/2;

    return query(node*2, s, mid, l, r)*query((node*2)+1, mid+1, e, l, r);

}

int main()

{
        ll n, k, i, j, x, y, ind, val;
        vector<int>v;
        char ch;
        while(scanf("%lld%lld", &n, &k)==2){

            for(i=1; i<=n; i++){
                scanf("%lld", &x);
                if(x>0)a[i]=1;
                else if(x<0)a[i]=-1;
                else a[i]=0;
            }
            build(1, 1, n);

            while(k--){
                cin>>ch;
                if(ch=='P'){
                    cin>>x>>y;
                    ll z = query(1, 1, n, x, y);
                    if(z==0)v.pb(48);
                    else if(z>0)v.pb(43);
                    else v.pb(45);
                }
                else if(ch=='C'){
                    cin>>ind>>val;

                    if(val>0)val=1;
                    else if(val<0)val=-1;
                    a[ind]=val;
                    update(1, 1, n, ind, val);

                }
            }
            for(i=0; i<v.size(); i++)printf("%c",v[i]);
            printf("\n");
            v.clear();
        }
        return 0;
}

///:-)
#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define inf 2000000000
#define sc(n) scanf("%d", &n)
#define Aktaruzzaman using
#define scl(n) scanf("%lld", &n)
#define scd(n) scanf("%lf", &n)
#define pi (2.0*acos(0.0))
#define Pramanik namespace std;
#define vsort(v)   sort(v.begin(),v.end())
#define ull unsigned long long int
#define mem(a, b) memset(a, b, sizeof a)
#define cf 100009
Aktaruzzaman Pramanik

typedef pair<int, int>pii;
map<pii, int>mp;

int main()
{
    int n, i, j, k,x, y, flg;

    while(scanf("%d", &n)==1){

        if(n==0)break;
        mp.clear();
        flg=0;
        for(i=1; i<=n; i++){
            scanf("%d%d", &x, &y);
            mp[pii(x, y)]++;
        }

        map<pii, int> :: iterator it;

        for(it=mp.begin(); it!=mp.end(); it++){

            x = (*it).first.first;
            y = (*it).first.second;
            if(mp[pii(x, y)]!=mp[pii(y, x)]){
                flg=1;
                break;
            }


        }


        if(flg==0)printf("YES\n");
        else printf("NO\n");

    }
    return 0;
}

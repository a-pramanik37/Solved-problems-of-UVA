//-_-
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
map<int, int>mp, mo;
set<int>s;
int a[100];
int main()
{
    int t, n, m, i, j , k, cc=0;

    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        for(i=1; i<=n; i++){
            cin>>m;
            while(m--){
                cin>>k;
                if(mp[k]==1 && mo[k]==i)continue;
                s.insert(k);
                mp[k]++;
                mo[k]=i;
            }
        }

        int tot=0;
        mem(a, 0);
        set<int> :: iterator it;

        for(it=s.begin(); it!=s.end(); it++){
            k = (*it);
            if(mp[k]==1){
                a[mo[k]]++;
                tot++;
            }
        }
        printf("Case %d:", ++cc);
        for(i=1; i<=n; i++){
            printf(" %lf%%", (double(a[i])/double(tot))*100.0);
            //cout<<a[i]<<" ";
        }

        printf("\n");
        mp.clear();
        mo.clear();
        s.clear();
    }
    return 0;
}

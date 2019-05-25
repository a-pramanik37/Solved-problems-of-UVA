//-_-
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long int
#define inf 200000000
#define pi (2.0*acos(0.0))
#define vsort(v)   sort(v.begin(),v.end())
#define ull unsigned long long int
#define mem(a, b) memset(a, b, sizeof a)
#define cf 100009

int a[1000005], b[105];

int main()
{
    int n, m,k, i, j, t;

    scanf("%d", &t);
    int cc=0;

    while(t--){
        scanf("%d%d%d", &n, &m, &k);
        a[1]=1, a[2]=2, a[3]=3;


        for(i=4; i<=n; i++){
            a[i]=(a[i-1]+a[i-2]+a[i-3])%m+1;
        }
        //for(i=1; i<=n; i++)printf("%d ",a[i]);
        //printf("\n");
        mem(b, 0);
        int st=1;
        int mn=inf, flg=0;
        int cnt = 0;
        for(i=1; i<=n; i++){
            if(a[i]>=1 && a[i]<=k){
                if(b[a[i]]==0)cnt++;
                b[a[i]]++;
            }

            while(cnt>=k){
                    flg=1;
                    mn=min(mn, i-st+1);
                    b[a[st]]--;
                    if(a[st]>=1 && a[st]<=k && b[a[st]]==0)cnt--;
                    st++;
            }
        }
        printf("Case %d: ",++cc);
        if(flg==0)printf("sequence nai\n");
        else printf("%d\n", mn);
    }
    return 0;
}

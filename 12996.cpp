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
int a[12], b[12];
int main()
{
    int t, n, l, i, j, cc=0;
    scanf("%d", &t);

    while(t--){
        scanf("%d%d", &n, &l);
        for(i=1; i<=n; i++){
            scanf("%d", &a[i]);
        }
        for(i=1; i<=n; i++){
            scanf("%d", &b[i]);
        }
        printf("Case %d: ", ++cc);
        int sum=0, flg=0;
        for(i=1; i<=n; i++){
            if(b[i]>=a[i])sum+=a[i];
            else {
                flg=1;
                break;
            }
        }
        if(flg==1 || sum>l)printf("No\n");
        else printf("Yes\n");

    }
    return 0;
}

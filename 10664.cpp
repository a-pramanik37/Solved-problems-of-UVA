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

string s;
int m, n, a[cf], flg;
int vis[22][204];
void pd(int pos, int sum)
{
    if(sum==0){
        flg=1;
        return;
    }

    if(pos>n)return;
    if(vis[pos][sum]!=-1)return;


    if(sum-a[pos]>=0)pd(pos+1, sum-a[pos]);
    pd(pos+1, sum);

    vis[pos][sum]=1;
    return;

}

int main()
{
    int i, j, k, num, sum;

    scanf("%d ", &m);
    while(m--){

        getline(cin, s);

        stringstream ss(s);
        n=0;
        sum = 0;
        while(ss>>num){
            a[++n]=num;
            sum+=num;
        }

        if(sum%2==1){
            printf("NO\n");
            continue;
        }
        mem(vis, -1);
        k = sum/2;
        flg=0;
        pd(1, k);
        if(flg==1)printf("YES\n");
        else printf("NO\n");

    }
    return 0;
}

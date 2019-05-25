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
int a[cf], b[12], c[12];

int ck(int u, int v){
    int f=0, p, q;
    while(u>0 && v>0){
        p = u%10;
        q = v%10;
        if(p!=q)f++;
        u/=10;
        v/=10;
    }

    if(f==1)return f;
    else return 0;
}

int main()
{
    int i, j, k, x, y, cc;

    for(i=2; i<=9999; i++){
        if(a[i]==0){
            for(j=i*2; j<=9999; j+=i){
                a[j]=1;
            }
        }
    }


    int t, cnt;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d", &x, &y);
        if(x>y)swap(x, y);
        cnt = 0;
        k=x;
        for(i=x+1; i<=y; i++){
            if(a[i]==0){
                if(ck(k, i)==1){
                        printf("%d\n", i);
                    cnt++;
                    k=i;
                }
            }
        }
        printf("%d\n", cnt);
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define mem(a, b) memset(a, b, sizeof a)
#define P printf
#define V(a) vector<ll>a
#define pb push_back

int main()

{

    int t, i, j, k, x, y,cnt, cc=1,n,flg,ans;

    char ch;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);

        cnt = 0;
        flg = 0;
        k =0;
        for(i=1; i<=n; i++){
            scanf(" %c", &ch);
            if(ch=='W')cnt=0;

            else if(ch=='D' || ch=='L'){
                cnt++;
            }
            if(cnt==3 && k==0){
                flg=1;
                ans = i;
                k++;
            }


        }
        printf("Case %d: ",cc++);

        if(flg==0) printf("Yay! Mighty Rafa persists!\n");

        else printf("%d\n",ans);

    }
    return 0;
}

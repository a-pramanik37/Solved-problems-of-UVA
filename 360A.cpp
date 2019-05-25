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

int n, d;
char s[cf];

int main()

{
        while(scanf("%d%d", &n, &d)==2){
            int cnt = 0, flg;
            int mx = 0;
            for(int i=1; i<=d; i++){
                scanf("%s",s);
                flg=0;
                for(int j=0; j<strlen(s); j++){
                    if(s[j]=='0'){
                        flg=1;
                        break;
                    }
                }
                if(flg==1)cnt++;

                    mx = max(mx, cnt);
                    if(flg==0)cnt=0;
            }
            printf("%d\n", mx);
        }
        return 0;
}

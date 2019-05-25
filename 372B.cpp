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
char  a[cf];
queue<int>q;
int vis[cf];
int main()
{
    int i, j, k, l, r, qs, st, en;

    while(cin>>a){
        int cnt=0, w=0, flg=0;
        qs=0;
        mem(vis, 0);
        st=0;
        int len = strlen(a);
        for(i=0; i<len; i++){
                cnt++;
                if(a[i]=='?')qs++;
            if(vis[a[i]-65]==0 && a[i]!='?'){
                w++;
            }
            vis[a[i]-65]++;

            if(cnt>=26){
                    cnt--;
                if((26-w)==qs){
                    en=i;
                    flg=1;
                    break;
                }
                else{
                    if(a[st]=='?'){
                        qs--;
                    }
                    else{
                        vis[a[st]-65]--;
                        if(vis[a[st]-65]==0)w--;
                    }
                }
                st++;
            }

            //printf("%d %d %d\n", cnt, w, qs);

        }

        if(flg==0)printf("-1\n");
        else{
            for(i=0; i<26; i++){
                if(vis[i]==0){
                    q.push(i);
                }
            }

            for(i=st; i<=en; i++){
                if(a[i]=='?'){
                    a[i]=q.front()+65;
                    q.pop();
                }
            }
            for(i=0; i<len; i++){
                if(a[i]=='?')printf("A");
                else printf("%c", a[i]);
            }
            printf("\n");
        }

    }
    return 0;
}

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
int f(int u)
{
    int g=1;
    for(int i=2; i<=u; i++)g*=i;
    return g;
}
string s;
int b[100];

struct dt
{
    int x, y, z;
}a[30];

int pos(char ch)
{
    for(int i=0; i<s.size(); i++){
        if(s[i]==ch)return i;
    }

}
int main()
{
    int n, m, i, j, k, x, y, p1, p2, p;

    while(scanf("%d%d", &n, &m)==2){
            if(n==0 && m==0)break;
            s="";
            for(i=0; i<n; i++)s+=(i+48);

            if(m==0){
                printf("%d\n", f(n));
                continue;
            }

            for(i=1; i<=m; i++){
                scanf("%d%d%d", &a[i].x, &a[i].y, &a[i].z);
            }


            int cnt = 0;
        while(1){

                for(i=0; i<n; i++){
                    b[i]=pos(i+48);
                }
                /*cout<<s<<endl;
                for(i=0; i<n; i++){
                    printf("%d >> %d\n", i, b[i]);
                }*/


                int flg=0;


                for(i=1; i<=m; i++){
                    if(a[i].z>=0){
                      p1 = b[a[i].x];
                      p2 = b[a[i].y];
                      if(p2<p1)swap(p1, p2);
                      if(p2-p1>a[i].z){
                        flg=1;
                        break;
                      }
                    }
                    else{
                        p1 = b[a[i].x];
                        p2 = b[a[i].y];
                        if(p2<p1)swap(p1, p2);
                        p = (-1)*a[i].z;
                        if(p2-p1<p){
                            flg=1;
                            break;
                        }
                    }
                }
                if(flg==0)cnt++;

                if(!next_permutation(s.begin(), s.end()))break;

            }

            printf("%d\n", cnt);
            s.clear();

    }
    return 0;
}

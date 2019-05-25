#include<set>
#include<list>
#include<map>
#include<stack>
#include<string>
#include<cstdio>
#include<cmath>
#include<queue>
#include<vector>
#include<cctype>
#include<cstdlib>
#include<cstring>
#include<iterator>
#include<fstream>
#include<sstream>
#include<numeric>
#include<iostream>
#include<algorithm>
using namespace std;

#define pb push_back
#define ll long long int
#define inf 2000000000
#define pi (2.0*acos(0.0))
#define vsort(v)   sort(v.begin(),v.end())
#define ull unsigned long long int
#define ff(i,a,n) for(int i=a;i<=n;i++)
#define mem(a, b) memset(a, b, sizeof a)

typedef pair<int, int>pii;
queue<pii>q;

int vis[100][100];
char a[100][100];
int i, j, n,  x, y, u, v,x1, y1;
int main()

{
        while(scanf("%d ", &n)==1){

            for(i=0; i<n; i++){
                for(j=0; j<n; j++){
                    cin>>a[i][j];
                    if(a[i][j]=='A'){
                        x1 = i;
                        y1 = j;
                    }
                }
            }

            for(i=0; i<n; i++){
                for(j=0; j<n; j++){
                    vis[i][j]=-1;
                }
            }

            vis[x1][y1]=0;

            q.push(pii(x1, y1));

            while(!q.empty()){

                int px = q.front().first;
                int py = q.front().second;

                q.pop();



            }

        }
}

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
typedef pair<int, int>pii;
int fx[]={-2, -1, 1, 2, 2, 1, -1, -2};
int fy[]={1, 2, 2, 1, -1, -2, -2, -1};

int a[10][10];
string s1, s2;
queue<pii>q;
int main()
{
    int r1, c1, r2, c2, i, j;
    while(cin>>s1>>s2){

        r1 = s1[1]-48;
        c1 = s1[0]-96;

        r2 = s2[1]-48;
        c2 = s2[0]-96;

       mem(a, -1);

       q.push(pii(r1, c1));
       a[r1][c1]=0;

       while(!q.empty()){

        int xx = q.front().first;
        int yy = q.front().second;
        q.pop();
        for(i=0; i<8; i++){
            int cc = xx+fx[i];
            int dd = yy+fy[i];

            if(cc>=1&&cc<=8 && dd>=1&&dd<=8 && a[cc][dd]==-1){
                a[cc][dd]=a[xx][yy]+1;
                q.push(pii(cc, dd));
            }

        }

       }

       //To get from e2 to e4 takes 2 knight moves.

       cout<<"To get from "<<s1<<" to "<<s2<<" takes "<<a[r2][c2]<<" knight moves."<<endl;

    }
    return 0;
}

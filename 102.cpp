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
struct dt
{
    string s;
    int val;
}a[10];

bool cmp(dt lhs, dt rhs)
{
    if(lhs.val<rhs.val)return true;
    else if(lhs.val==rhs.val && lhs.s<rhs.s)return true;
    else return false;
}

int main()
{
    int b1, g1, c1, b2, g2, c2, b3, g3, c3, i, j;

    while(cin>>b1>>g1>>c1>>b2>>g2>>c2>>b3>>g3>>c3){

        int p=0;
        a[++p].s="BCG";
        a[p].val=b2+b3+c1+c3+g1+g2;
        a[++p].s="BGC";
        a[p].val=b2+b3+g1+g3+c1+c2;
        a[++p].s="CBG";
        a[p].val=c2+c3+b1+b3+g1+g2;
        a[++p].s="CGB";
        a[p].val=c2+c3+g1+g3+b1+b2;
        a[++p].s="GBC";
        a[p].val=g2+g3+b1+b3+c1+c2;
        a[++p].s="GCB";
        a[p].val=g2+g3+c1+c3+b1+b2;
        sort(a+1, a+1+p, cmp);

        /*for(i=1; i<=p; i++){
            cout<<a[i].s<<" "<<a[i].val<<endl;
        }*/

        cout<<a[1].s<<" "<<a[1].val<<endl;

    }
    return 0;
}

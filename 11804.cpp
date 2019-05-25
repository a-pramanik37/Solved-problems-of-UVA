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
#define pi (2.0*acos(0.0))
#define ull unsigned long long int
#define ff(i,a,n) for(int i=a;i<=n;i++)
#define mem(a, b) memset(a, b, sizeof a)
#define dec2 ll n, m, p, x, y, i, j, k, cnt, mx, mn, ans, u, v, z, l, r;
#define dec1 int n, m, p, x, y, i, j, k, cnt, mx, mn, ans, u, v, z, l, r,t;

struct dt
{
    int att, dff;
    string nm;
}a[100], t1[100], t2[100];
dec1;

bool cmp(dt l, dt r){

        if(l.att>r.att)return true;
        else if(l.att==r.att &&l.dff<r.dff)return true;
        else if(l.att==r.att && l.dff==r.dff && l.nm<r.nm)return true;
        else return false;

}

bool cmp1(dt l, dt r){
        if(l.nm<r.nm)return true;
        else return false;
}

int main()

{
        cin>>t;
        //dt t1[100], t2[100];
        for(k=1; k<=t; k++){
            for(i=1; i<=10; i++){
                cin>>a[i].nm;
                scanf("%d%d", &a[i].att, &a[i].dff);
            }

            sort(a+1, a+10+1, cmp);

           for(i=1; i<=5; i++){
           t1[i]=a[i];
           }

           j=1;

           for(i=6; i<=10; i++){
            t2[j]=a[i];
            j++;
           }

           sort(t1+1,t1+1+5,cmp1);
           sort(t2+1, t2+1+5, cmp1);

            printf("Case %d:\n",k);


            printf("(");
            for(i=1; i<=4; i++){
                    cout<<t1[i].nm<<", ";

            }
            cout<<t1[5].nm<<")"<<endl;


            printf("(");
            for(i=1; i<=4; i++){
                    cout<<t2[i].nm<<", ";
            }
            cout<<t2[5].nm<<")"<<endl;


        }
        return 0;
}

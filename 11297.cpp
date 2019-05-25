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
int a[505][505], tr1[505][3*505], tr2[505][3*505];

void build(int node, int s, int e, int ro)
{
    if(s==e){
        tr1[ro][node]=a[ro][s];
        tr2[ro][node]=a[ro][s];
        return;
    }

    int mid = (s+e)/2;
    build(node*2, s, mid, ro);
    build(node*2+1, mid+1, e, ro);
    tr1[ro][node]=min(tr1[ro][node*2], tr1[ro][node*2+1]);
    tr2[ro][node] = max(tr2[ro][node*2], tr2[ro][node*2+1]);

}

int query1(int node, int s, int e, int l, int r, int ro){

        //if(l>e || r<s)return;
        if(s>=l && e<=r){
            return tr1[ro][node];
        }

        int mid = (s+e)/2;

        if(r<=mid){
            return query1(node*2, s, mid, l, r, ro);
        }
        else if(l>mid){
            return query1(node*2+1, mid+1, e, l, r, ro);
        }
        else return min(query1(node*2, s, mid, l, mid, ro), query1(node*2+1, mid+1, e, mid+1, r, ro));

}

int query2(int node, int s, int e, int l, int r, int ro){

        //if(l>e || r<e)return;
        if(s>=l && e<=r){
            return tr2[ro][node];
        }

        int mid = (s+e)/2;

        if(r<=mid){
            return query2(node*2, s, mid, l, r, ro);
        }
        else if(l>mid){
            return query2(node*2+1, mid+1, e, l, r, ro);
        }
        else return max(query2(node*2, s, mid, l, mid, ro), query2(node*2+1, mid+1, e, mid+1, r, ro));

}

void update(int node, int s, int e, int ind, int val, int ro){

        if(s==ind && e==ind){
            tr1[ro][node]=val;
            tr2[ro][node]=val;
            //a[ro][node]=val;
            return;
        }
        int mid = (s+e)/2;

        if(ind<=mid){
            update(node*2, s, mid, ind, val, ro);
        }
        else update(node*2+1, mid+1, e, ind, val, ro);

        tr1[ro][node]=min(tr1[ro][node*2], tr1[ro][node*2+1]);
        tr2[ro][node] = max(tr2[ro][node*2], tr2[ro][node*2+1]);

}

int main()

{
        int n, q, i, j, k, x1, y1, x2, y2, mx, mn,ro, val;
        char ch[5];
        scanf("%d", &n);

            for(i=1; i<=n; i++){
                for(j=1; j<=n; j++){
                    scanf("%d", &a[i][j]);
                }
            }

            for(i=1; i<=n; i++){
                build(1, 1, n, i);
            }

            scanf("%d", &q);

            while(q--){
                    scanf("%s", ch);
                    if(ch[0]=='q'){
                scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
                mx = 0;
                mn=inf;
                for(i=x1; i<=x2; i++){
                    mx = max(mx, query2(1, 1, n, y1, y2, i));
                    mn = min(mn, query1(1, 1, n, y1, y2, i));
                }
                printf("%d %d\n", mx, mn);
                    }
               else{
                    scanf("%d%d%d", &x1, &y1, &val);
                update(1, 1, n, y1, val, x1);
               }
            }


        return 0;
}

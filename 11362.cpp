#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long int
#define inf 2000000000
#define pi (2.0*acos(0.0))
#define vsort(v)   sort(v.begin(),v.end())
#define ull unsigned long long int
#define mem(a, b) memset(a, b, sizeof a)
#define cf 100004


struct node
{
    int alp[10];

}tr[cf];
int ind[cf];
int  flg;
string s;
int nd;

void refresh(int node){

        for(int k=0; k<10; k++){
            tr[node].alp[k]=-1;
        }
}

void  addwrd(string str)
{
    int cur_ind = 0, id;
    int len = str.size();

    for(int i=0; i<len; i++){
        id = str[i]-'0';
        if(tr[cur_ind].alp[id]==-1){
            ++nd;
            refresh(nd);
            tr[cur_ind].alp[id]=nd;
        }

        cur_ind = tr[cur_ind].alp[id];

        if(ind[cur_ind]>0)flg=1;

    }
    for(int k=0; k<10; k++){
        if(tr[cur_ind].alp[k]!=-1){
            flg=1;
        }
    }

    ind[cur_ind]++;
}


int main()

{
        int t, n;
        scanf("%d", &t);

        while(t--){
            scanf("%d", &n);
            refresh(0);
            nd = 0;
            flg = 0;
            mem(ind, 0);
            for(int j = 1; j<=n; j++){
                cin>>s;
                if(flg==0)addwrd(s);
            }


            if(flg==1)printf("NO\n");
            else printf("YES\n");


        }
        return 0;
}

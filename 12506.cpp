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

struct node
{
    int alp[26];
    node()
    {
        for(int i =0; i<26; i++)alp[i]=-1;
    }
}trie[1000005];
int nd, sum;
int ind[1000005];
string s, st[1005];

void addwrd(string str)
{
    int cur=0, id, len=str.size();
    for(int i = 0; i<len; i++){
        id = str[i]-'a';
        if(trie[cur].alp[id]==-1){
            trie[cur].alp[id]=++nd;
        }
        cur = trie[cur].alp[id];
        ind[cur]++;
    }

}

int  check(string str){
    int cur = 0, id, len = str.size(), i;
    for(i=0; i<len; i++){
            id = str[i]-'a';
        cur = trie[cur].alp[id];
        if(ind[cur]==1){
            break;
        }
    }
    return i+1;
}

int main()

{
        int t, n, i, j, k;
        scanf("%d", &t);

        while(t--){
            scanf("%d", &n);
            j=0;
            mem(ind, 0);
            nd = 0;
            while(n--){
                cin>>s;
                st[j]=s;
                j++;
                addwrd(s);
            }
            sum = 0;
            for(k=0; k<j; k++){
                sum+=check(st[k]);
                //cout<<st[k]<<" "<<check(st[k])<<endl;
            }
            printf("%d\n",sum);
            for(i=0; i<nd; i++){
                trie[i]=node();
            }
        }
        return 0;
}

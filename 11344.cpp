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
string a;

int ck(string b, int x)
{
    int sum=0;
    int len = a.size();
    for(int i=0; i<len; i++){
        sum = sum*10+(b[i]-48);
        sum%=x;
    }
    if(sum==0)return 0;
    else return 1;
}

int main()
{
    int t, n, i, j, k;
    scanf("%d", &t);
    while(t--){
        cin>>a;
        cin>>n;
        int flg=0;
        while(n--){
                cin>>k;
            if(ck(a, k)!=0){
                flg=1;
            }
        }
        cout<<a;
        if(flg==0){
            printf(" - Wonderful.\n");
        }
        else printf(" - Simple.\n");
    }
    return 0;
}

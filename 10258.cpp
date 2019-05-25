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

struct data
{
    int sol, pen, prob[10];
    data()
    {
        sol=0, pen=0;
        for(int k=0; k<10; k++)prob[k]=0;
    }
};

int g[105];
string s;
vector<int>v;
int main()

{
        int t, i, j, srl, pr, tym;
        char ch;
        scanf("%d", &t);

        while(t--){
            data a[105];
            mem(g, 0);
            while(1){
                getline(cin, s);
                if(s.size()==0)break;
                else{
                    stringstream ss(s);
                    int num;
                    while(ss>>num)v.pb(num);
                    srl=v[0];
                    pr=v[1];
                    tym=v[2];
                    ch = s[s.size()-1];
                    if(ch=='I'){
                        a[srl].
                    }
                }
            }

        }

}

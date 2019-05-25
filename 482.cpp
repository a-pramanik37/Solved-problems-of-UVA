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

vector<int>a;

string s, b[10000];

int main()

{
        int t, i, j;
        scanf("%d\n", &t);

        for(int f=1; f<=t; f++){

            getline(cin, s);
            stringstream ss(s);
            int  num;
            int cnt = -1;
            while(ss>>num){
                    a.pb(num);
                    ++cnt;
            }

            for(i=0; i<=cnt; i++){
                cin>>s;
                int x = a[i]-1;
                b[x]=s;
            }

            scanf("\n");

            if(f!=1)printf("\n");

            for(i=0; i<=cnt; i++){
                cout<<b[i]<<endl;
            }
            a.clear();

        }
        return 0;
}

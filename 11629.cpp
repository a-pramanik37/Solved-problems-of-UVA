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
map<string, int>mp;
string s;
int main()

{
    int n, m, i, j, val, sum;
    double x;
    while(scanf("%d%d", &n, &m)==2){

        for(i=1; i<=n; i++){
            cin>>s>>x;
            x*=10;
            x=int(x);
            mp[s]=x;
        }

        for(i=1; i<=m; i++){
                  sum = 0;
            while(1){
                cin>>s;
                if(s=="<"||s==">"||s=="<="||s==">="||s=="="){
                    cin>>val;
                    val*=10;
                    break;
                }
                else if(s=="+")continue;
                //cout<<mp[s]<<" "<<sum<<endl;
               sum+=mp[s];
            }
            printf("Guess #%d was ",i);
            if(s=="<"){

                if(val>sum)printf("correct.\n");
                else printf("incorrect.\n");
             //cout<<sum<<" "<<val<<endl;
            }
            else if(s==">"){

                if(val<sum)printf("correct.\n");
                else printf("incorrect.\n");
                //cout<<sum<<" "<<val<<endl;
            }
           else if(s=="<="){

                if(val>=sum)printf("correct.\n");
                else printf("incorrect.\n");
                 //cout<<sum<<" "<<val<<endl;
            }
            else if(s==">="){

                if(val<=sum)printf("correct.\n");
                else printf("incorrect.\n");
                //cout<<sum<<" "<<val<<endl;
            }
            else {

                if(val==sum)printf("correct.\n");
                else printf("incorrect.\n");
                 //cout<<sum<<" "<<val<<endl;
            }
        }
        mp.clear();
    }
    return 0;
}

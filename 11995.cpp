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
stack<int>st;
priority_queue<int>pr;
queue<int>q;
vector<int>v;
int main()
{
    int n, i, j, k, x, val;
    while(scanf("%d", &n)==1){


        while(n--){
            cin>>x;
            if(x==1){
                    cin>>val;
                q.push(val);
                pr.push(val);
                pr.push(val);
            }
            else{
                cin>>val;
                v.pb(val);
            }
        }
        int flgQ=0, flgPQ=0, flgST=0;

        for(i=0; i<v.size(); i++){
            x = q.front();
            q.pop();
            if(v[i]!=x){
                flgQ=1;
                break;
            }
        }

        for(i=0; i<v.size(); i++){
            x = pr.top();
            pr.pop();
            if(v[i]!=x){
                flgPQ=1;
                break;
            }
        }

        for(i=0; i<v.size(); i++){
            x = st.top();
            st.pop();
            if(v[i]!=x){
                flgST=1;
                break;
            }
        }

        if(flgQ==0 && flgPQ!=0 && flgST!=0)printf("queue\n");
        else if(flgPQ==0 && flgQ!=0 && flgST!=0)printf("priority queue\n");
        else if(flgST==0 && flgQ!=0 && flgPQ!=0)printf("stack\n");
        else if((flgQ==0&&flgPQ==0)||(flgQ==0&&flgST==0)||(flgPQ==0&&flgST==0)||(flgQ==0&&flgPQ==0&&flgST==0))printf("not sure\n");
        else printf("impossible\n");

        while(!q.empty())q.pop();
        while(!pr.empty())pr.pop();
        while(!st.empty())st.pop();
        v.clear();

    }
    return 0;
}

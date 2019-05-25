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

priority_queue<int, vector<int>, greater<int> >q;

int main()

{
        int n, i, x, y,sum;
        while(scanf("%d", &n)==1 && n!=0){

            while(n--){
                scanf("%d", &x);
                q.push(x);
            }
            sum = 0;
            while(q.size()>1){
                x = q.top();
                q.pop();
                y = q.top();
                q.pop();
                q.push(x+y);
                sum+=(x+y);
            }
            printf("%d\n", sum);
            q.pop();
        }
        return 0;
}

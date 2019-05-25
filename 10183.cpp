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
string a[485], c, l, r;


void f(int p, int q)
{
    c.clear();
    int len = max(a[p].size(), a[q].size());
    int i = a[p].size()-1;
    int j = a[q].size()-1;
    int cnt = 0, carry=0;
    int x, y;

    while(cnt<len){
        x=0, y=0;
        if(i>=0)x = a[p][i]-48;
        if(j>=0)y=a[q][j]-48;

        c+=((x+y+carry)%10)+48;
        carry = (x+y+carry)/10;
        i--,j--,cnt++;
    }
    if(carry>0)c+=carry+48;

    reverse(c.begin(), c.end());
}



int check(string x,string y){
 long l1,l2,i;
 l1 = x.size();
 l2 = y.size();

 if(l1 != l2){
  return l1-l2;
 }
 for(i = 0; i < l1; i++){
  if(x[i] > y[i])
   return 1;
  else if(x[i] < y[i])
   return -1;
 }
 return 0;
}


int main()
{
    a[0]="1";
    a[1]="2";
    int mx = 0;
    for(int i=2; i<=482; i++){
        f(i-1, i-2);
        a[i]=c;
    }
    int cnt, i;

    while(cin>>l>>r){
        if(l=="0"&&r=="0")break;
        int st, en;

       for(i=0; i<=482; i++){
        if(check(a[i], l)>=0){
             st=i;
            break;
        }
       }

       for(i=st; i<=482; i++){
        if(check(a[i], r)>=0){
           if(a[i]==r)en=i;
           else en=i-1;
           break;
        }
       }
       cout<<en-st+1<<endl;
        /*printf("%d %d\n",st, en);
        for(i=st-1; i<=en+1; i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;*/
    }

    return 0;

}


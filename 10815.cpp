///:-)
#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define inf 2000000000
#define infLL 9000000000000000000
#define infULL 18446744073709551615
#define Aktaruzzaman using
#define pi (2.0*acos(0.0))
#define Pramanik namespace std;
#define vsort(v)   sort(v.begin(),v.end())
#define ull unsigned long long int
#define mem(a, b) memset(a, b, sizeof a)
#define cf 100009
#define MOD 1000000007
#define pii pair<int, int>

//int dx[]={0,1,0,-1};
//int dy[]={1,0,-1,0};
//int dx[]={1,1,0,-1,-1,-1,0,1};
//int dy[]={0,1,1,1,0,-1,-1,-1};

template <class T> inline T gcd(T a,T b){if(b==0)return a;return gcd(b,a%b);}
template< class T > inline T lcm(T a,T b) {a=abs(a);b=abs(b); return (a/gcd(a,b))*b;}
template <class T> inline T is_prime(T a){if(a<2|a==4)return false;if(a==2||a==3||a==5)return true; T g=(T)sqrt(a)+1; for(T i=2; i<=g; i++){if(a%i==0)return false;}return false;}
template <class T> inline T bigmod(T n,T p,T m){if(p==0)return 1; if(p%2)return ((n%m)*bigmod(n,p-1,m))%m; else {T c=bigmod(n,p/2,m);return ((c%m)*(c%m))%m;}}

Aktaruzzaman Pramanik

set<string>st;
string s, ss;

int main()
{
    //freopen("input.txt","r",stdin)
    //freopen("output.txt","w",stdout)

    int i, j, k;

    while(cin>>s){
            ss="";
           int len = s.size();
           for(i=0;i<=len; i++){
            if(isalpha(s[i])){
               ss+=tolower(s[i]);
            }
            else if(ss!=""){
                st.insert(ss);
                ss="";
            }
           }


    }

        set<string>::iterator it;

        for(it=st.begin(); it!=st.end(); it++){
            cout<<(*it)<<endl;
        }
        st.clear();

    return 0;
}

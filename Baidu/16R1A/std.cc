#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <cassert>
using namespace std;
#define rep(i,a,n) for (int i=a;i<n;i++)
#define per(i,a,n) for (int i=n-1;i>=a;i--)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define SZ(x) ((int)(x).size())
typedef vector<int> VI;
typedef long long ll;
typedef pair<int,int> PII;
const ll mod=1000000007;
ll powmod(ll a,ll b,ll mod) {ll res=1;a%=mod; assert(b>=0); for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}
// head

int _,__,x,k,c;
ll m;
int main() {
  for (scanf("%d",&_);_;_--) {
    scanf("%d%I64d%d%d",&x,&m,&k,&c);
    int r=(powmod(10,m,k*9)-1)/9*x%k;
    c%=k;
    printf("Case #%d:\n",++__);
    puts(r==c?"Yes":"No");
  }
  return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define inputJunk cin.sync_with_stdio(0); cin.tie(0);
#define pb push_back
//#define f first
//#define s second

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;

const int INF = 0x3f3f3f3f;
const ll MM = 1005, MOD = 1e9+7;

int n, k, m, b[MM], mc, ans = 0;
bool cmp(int a, int b) {return (((a)%(mc))>((b)%(mc)));}
int main()
{
    inputJunk
    cin>>n>>k;
    int m = 0;
    for(int i = 0;i<n;i++){
        cin>>b[i];
        m = max(m, b[i]);
    }
    for(int ddd = 1;ddd<=m;ddd++){
        int l = 0;
        for(int i = 0;i<n;i++){
            l+=b[i]/ddd;
        }
        if(l<k/2)break;
        if(l>=k){
            ans = max(ans, ddd*(k/2));
            continue;
        }
        mc = ddd;
        sort(b, b+n, cmp);
        int cur  = ddd*(l-k/2);
        for(int i = 0;i<n&&i+l<k;i++){
            cur+=b[i]%ddd;
        }
        ans = max(ans, cur);
    }cout<<ans<<endl;
}

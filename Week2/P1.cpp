#include <bits/stdc++.h>
using namespace std;
//#include <ext/rope>
//using namespace __gnu_cxx;
#include <ext/pb_ds/assoc_container.hpp>
#include <stdlib.h>
using namespace __gnu_pbds;

//#pragma GCC optimize("Ofast,unroll-loops")
//#pragma GCC target("avx,avx2,fma")
#define inputJunk ios_base::sync_with_stdio(0); cin.tie(0);
#define pb push_back
#define f first
#define s second
#define all(x) x.begin(), x.end()
#define debug cout<<"HERE"<<endl;
#define ell "\n"
//#define x real()
//#define y imag()

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pi;
typedef pair<ll, ll> pll;
typedef pair<int, pi> trip;
typedef pair<pll, ll> tripll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pi> vpi;
typedef vector<pll> vpll;
typedef vector<trip> vtrip;
typedef vector<tripll> vtripll;
typedef complex<double> point;

const int INF = 1e9+1212;
const ll INFLL = 1e12+1212;
const ll P = 9973, M = 1e9+9;
const int MM = 1e6+5; int mod = 1e9+7;//99824435

int usb, ps2, both;
vi usb1, ps4;

int main(){
    inputJunk
    cin>>usb>>ps2>>both;
    int n; cin>>n;

    for(int i = 0;i<n;i++){
        int cost; string type;
        cin>>cost>>type;
        if(type=="USB"){
            usb1.pb(cost);
        }else{
            ps4.pb(cost);
        }
    }
    sort(all(usb1)); sort(all(ps4));
    reverse(all(usb1)); reverse(all(ps4));
    ll cnt = 0, ans = 0;
    while(usb--&&!usb1.empty()){
        cnt++;
        ans+=usb1[usb1.size()-1];
        usb1.pop_back();
    }

    while(ps2--&&!ps4.empty()){
        cnt++;
        ans+=ps4[ps4.size()-1];
        ps4.pop_back();
    }

    while(both--&&(!usb1.empty()||!ps4.empty())){
        cnt++;
        int a = INF;
        int b = INF;
        if(!usb1.empty())a = usb1[usb1.size()-1];
        if(!ps4.empty())b = ps4[ps4.size()-1];

        if(a<b){
            ans+=usb1[usb1.size()-1];
            usb1.pop_back();
        }else{
            ans+=ps4[ps4.size()-1];
            ps4.pop_back();
        }
    }
    cout<<cnt<<" "<<ans<<ell;
}

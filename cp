
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define rev(x) reverse(all(x))
#define printv(v) for (auto i : v) cout << i << " "; cout << '\n'
template<typename T>
bool inVector(const vector<T>& v, T val) {
    return find(all(v), val) != v.end();
}
ll binToDec(const vll& bits) {
    ll dec = 0;
    for (ll b : bits) dec = (dec << 1) | b;
    return dec;
}
vll decToBin(ll n) {
    vll bits;
    if (n == 0) return {0};
    while (n > 0) {
        bits.pb(n % 2);
        n /= 2;
    }
    rev(bits);
    return bits;
}
ll gcdll(ll a, ll b) { return b == 0 ? a : gcdll(b, a % b); }
ll lcmll(ll a, ll b) { return (a / gcdll(a, b)) * b; }
void solve() {
    ll n;
    cin >> n;
    vll a(n);
    for (ll i = 0; i < n; i++) cin >> a[i];
    
    
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}




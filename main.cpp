/**
 * @author      : MöNir (monir81.mk@gmail.com)
 */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';

template<class T> bool ckmin(T& a, const T& b) { return b < a ? a = b, 1 : 0; }
template<class T> bool ckmax(T& a, const T& b) { return a < b ? a = b, 1 : 0; }
bool Check(ll n, ll k) { return n & (1LL << k); }
void Set(ll& n, ll k) { n |= (1LL << k); }
void Reset(ll& n, ll k) { n &= ~(1LL << k);}
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
#define rng uniform_int_distribution<int>(0, INT_MAX)(rng)
#define len(x) (int)(x).size()
#define all(x) x.begin(), x.end()


void solve() {

}

bool multi = true;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t = 1;
  if (multi)
    cin >> t;
  while (t--)
    solve();
}


#include "egcd.cpp"
ll mod_inv(ll a, ll m) {
    ll x, y, d = egcd(a, m, x, y);
    return d == 1 ? smod(x,m) : -1; }

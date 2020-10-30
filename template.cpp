#include <bits/stdc++.h>
using namespace std;

#define fo(i, n) for (i = 0; i < n; i++)
#define si(x) scanf("%d", &x)
#define s2i(x, y) scanf("%d %d", &x, &y)
#define sl(x) scanf("%lld", &x)
#define s2l(x, y) scanf("%lld %lld", &x, &y)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define pi_withspace(x) printf("%d ", x)
#define pl(x) printf("%lld\n", x)
#define ps(s) printf("%s\n", s)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

bool isPrime(int num)
{
    bool flag = true;
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            flag = false;
            break;
        }
    }
    return flag;
}

ll binaryToDecimal(vl bitArray, ll start, ll end)
{
    ll result = 0;
    int base = 1;
    for (ll i = end; i >= start; i--)
    {
        result += bitArray[i] * base;
        base *= 2;
    }
    return result;
}

int main()
{

    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    srand(time(NULL));
    ll n, q, l, r;

    s2l(n, q);

    ll i = 0;

    vl bitArray(n, 0);
    fo(i, n)
    {
        sl(bitArray[i]);
    }

    while (q--)
    {
        s2l(l, r);
        pl(binaryToDecimal(bitArray, l, r));
    }
    return 0;
}

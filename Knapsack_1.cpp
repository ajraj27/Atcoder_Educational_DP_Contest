#include <bits/stdc++.h>	
using namespace std;
#define anuj ios_base::sync_with_stdio(false);cin.tie(NULL)
#define int long long int
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define ll long long int
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%I64d",&x)
#define ss(s)	scanf("%s",s)
#define all(v)  sort(v.begin(),v.end())
#define rall(v) sort(v.rbegin(),v.rend())
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define clr(x) memset(x, 0, sizeof(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
#define endl '\n'
typedef pair<int, int>	pii;
typedef vector<int>		vi;
typedef vector<pii>		vpii;
typedef vector<vi>		vvi;
const int mod = 1000000007;
const int N = 2e5+5;
const int LG = 20;
int a[N];

int32_t main(){
	anuj;
	// #ifndef ONLINE_JUDGE
 //    freopen("inputf.txt", "r", stdin);
 //    freopen("outputf.txt", "w", stdout);
	// #endif

	int n,W;
	cin >> n >> W;

	vi value(n),weight(n);
	fo(i,n){
		cin >> weight[i] >> value[i];
	}

	int dp[n+1][W+1];
	memset(dp,0,sizeof(dp));

	for(int item=1;item<=n;item++){
		for(int C=1;C<=W;C++){
			dp[item][C]=dp[item-1][C];
			if(weight[item-1]<=C) dp[item][C]=max(dp[item][C],dp[item-1][C-weight[item-1]]+value[item-1]);
		}
	}

	cout << dp[n][W];
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define endl '\n'
#define all(x) (x).begin(),(x).end()
const int INF=1000000000+5;
const int N=50000+5;
const ll oo=1e18+5;
const ll mod=1e9+7;

int dist[N];
vector<pair<int,int>> v[N];
bool used[N];
int n,m,k;


void dijkstra(int beg){
	for(int i=0;i<N;++i) dist[i]=INF;
	for(int i=0;i<N;++i) used[i]=0;
	dist[beg]=0;
	for(int times=1;times<=n;++times){
		pair<int,int> minVer={INF,0};
		for(int i=0;i<n;++i){
			if(minVer.first>dist[i]&&!used[i]){
				minVer.first=dist[i];
				minVer.second=i;
			}
		}
		used[minVer.second]=1;
		for(pair<int,int> x:v[minVer.second]){
			if(dist[x.first]>minVer.first+x.second&&!used[x.first]){
				dist[x.first]=minVer.first+x.second;
			}
		}
	}
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin>>n>>m>>k;
	for(int i=0;i<m;++i){
		int x,y;
		int t;
		cin>>x>>y>>t;
		--x,--y;
		v[x].push_back({y,t});
		v[y].push_back({x,t});
	}
	for(int i=0;i<N;++i) dist[i]=INF;
	dijkstra(0);
	while(k--){
		int x,y;
		cin>>x>>y;
		--x,--y;
		int ans=dist[x]+dist[y];
		//~ cout<<"dist "<<x+1<<" : "<<dist[x]<<"     dist "<<y+1<<" : "<<dist[y]<<endl;
		if(ans>=INF) cout<<"no solution";
		else cout<<ans;
		cout<<endl;
	}
	return 0;
}

#include <bits/stdc++.h>

using namespace std ;

const int N=1e3+10;
vector<int> g[N];
bool vis[N]={0};

bool parent[1005]={0};

void dfs(int a){
	vis[a]=1;
	for(auto elm:g[a]){
	parent[elm]=a;
	if(!vis[elm]){
		vis[elm]=1;
		dfs(elm);
	}
}
	
int main(){
	
	int n,q;
    bool girls[n+1]={0};
	cin>>n;
	for(int i=1;i<=n-1;i++){
		int a,b;
		cin>>a>>b;
		g[a].push_back(b);
		g[b].push_back(a);
	}
    cin>>q;
    for(int i=1;i<=q;i++){
		int a;
		cin>>a;
        girls[a]=1;
	}
    dfs(1);
	int ans=n;
	for(int i=n-1;i=2;i--){
		if (parent[i]==1 &&(girls[i])){
			ans=i;
		}
	}

    cout<<ans;
    
    return 0;
}

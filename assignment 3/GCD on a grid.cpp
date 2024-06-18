#include<bits/stdc++.h>
using namespace std;
#define i64 long long
#define mp make_pair
#define pb push_back
#define all(x) (x).begin(), (x).end()
 
int a[204][204];
void Solve(void) {
  int N, M; cin >> N >> M;
  for (int i = 1; i <= N; i ++) {
    for (int j = 1; j <= M; j ++) {
      cin >> a[i][j];
    }
  }
  int g = __gcd(a[1][1], a[N][M]);
  vector<vector<bool>> f(N + 2, vector<bool> (M + 2, false));
  auto reset = [&] () {
    for (int i = 1; i <= N; i ++) {
      for (int j = 1; j <= M; j ++) {
        f[i][j] = false;
      }
    }
  };
  function<void(int, int, int)> dfs = [&] (int u, int v, int G) {
    f[u][v] = true;
    if (u < N && !f[u + 1][v] && a[u + 1][v] % G == 0) {
      dfs(u + 1, v, G);
    } if (v < M && !f[u][v + 1] && a[u][v + 1] % G == 0) {
      dfs(u, v + 1, G);
    }
  };
  int mx = 0;
  for (int i = 1; i * i <= g; i ++) {
    if (g % i == 0) {
      if (i > mx) {
        reset();
        dfs(1, 1, i);
        if (f[N][M]) mx = max(mx, i);
      }
      if (g/i != i && g/i > mx) {
        reset();
        dfs(1, 1, g/i);
        if (f[N][M]) mx = max(mx, g/i);
      }
    }
  }
  cout << mx << "\n";
}
signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0);
  int Tests = 1; cin >> Tests;
  while (Tests --) {
    Solve();    
  }
}

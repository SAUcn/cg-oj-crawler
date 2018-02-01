#include <iostream>
#include <queue>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
#include <string.h>
#include <math.h>

#define INF 0x3f3f3f3f
#define eps 1e-8
typedef unsigned long long ull;
typedef long long ll;

using namespace std;

int n, m;
int price[105];
int match[105][105];

int main() {
	cin >> n >> m;
		memset(match, 0, sizeof(match));
		for (int i = 1; i <= n; i++)cin >> price[i];
		int u, v;
		for (int i = 0; i < m; i++) {
			cin >> u >> v;
			match[u][v] = 1;
			match[v][u] = 1;
		}
		int MIN = INF;
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				if (match[i][j] == 0)continue;
				for (int k = j + 1; k <= n; k++) {
					if (match[j][k] == 0 || match[k][i] == 0)continue;
					if (MIN > price[i] + price[j] + price[k])MIN = price[i] + price[j] + price[k];
				}
			}
		}
		if (MIN == INF)cout << -1 << endl;
		else cout << MIN << endl;
	

	//system("pause");
}

#include <iostream>
#include <vector>
#include <utility> // std::pair
#include <queue> // std::priority_queue
#include <functional> // std::greater
using namespace std;


constexpr long long INF = (1LL << 60);

// 辺の情報
struct Edge
{
	// 行先
	long long to;

	// コスト
	long long cost;
};

using Graph = std::vector<std::vector<Edge>>;

// { distance, from }
using Pair = std::pair<long long, int>;

// ダイクストラ法 (1.1 基本実装)
// distances は頂点数と同じサイズ, 全要素 INF で初期化しておく
void Dijkstra(const Graph& graph, std::vector<long long>& distances, int startIndex)
{
	// 「現時点での最短距離, 頂点」の順に取り出す priority_queue
	// デフォルトの priority_queue は降順に取り出すため std::greater を使う
	std::priority_queue<Pair, std::vector<Pair>, std::greater<Pair>> q;
	q.emplace((distances[startIndex] = 0), startIndex);

	while (!q.empty())
	{
		const long long distance = q.top().first;
		const int from = q.top().second;
		q.pop();

		// 最短距離でなければ処理しない
		if (distances[from] < distance)
		{
			continue;
		}

		// 現在の頂点からの各辺について
		for (const auto& edge : graph[from])
		{
			// to までの新しい距離
			const long long d = (distances[from] + edge.cost);

			// d が現在の記録より小さければ更新
			if (d < distances[edge.to])
			{
				q.emplace((distances[edge.to] = d), edge.to);
			}
		}
	}
}

int main()
{
	long long V, E, r;
	cin >> V;
    E = V-1;
    r = 0;
    long long x = 0;

	Graph graph(V);
	while (E--)
	{
		long long s, t, d;
        s = x; t = x+1;
		cin >> d;
		graph[s].push_back({ t, d });

        cin >> d >> t;
        graph[s].push_back({ t-1, d });
        x++;
	}

	std::vector<long long> distances(V, INF);
	Dijkstra(graph, distances, r);

    cout << distances[V-1] << endl;
}
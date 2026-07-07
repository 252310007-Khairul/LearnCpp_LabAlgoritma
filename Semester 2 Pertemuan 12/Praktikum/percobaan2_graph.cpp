#include <bits/stdc++.h>
#define MAX 100005
#define INF INT_MAX

using namespace std;

vector<pair<int, int> > adj[MAX];
bool vis[MAX];
int dist[MAX];

void dijkstra(int start)
{
    memset(vis, false, sizeof vis);
    for (int i = 0; i < MAX; i++)
        dist[i] = INF;
    dist[start] = 0;
    
    priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > pq;
    pq.push({0, start});
    
    while (!pq.empty())
    {
        pair<int, int> p = pq.top();
        pq.pop();
        
        int x = p.second;
        if (vis[x])
            continue;
        vis[x] = true;
        
        for (size_t i = 0; i < adj[x].size(); i++)
        {
            int e = adj[x][i].first;
            int w = adj[x][i].second;
            if (dist[x] + w < dist[e])
            {
                dist[e] = dist[x] + w;
                pq.push({dist[e], e});
            }
        }
    }
}

int main()
{
    // Representasi Graph (Node Asal -> {Node Tujuan, Bobot/Jarak})
    adj[1].push_back({2, 3});
    adj[2].push_back({1, 3});
    adj[2].push_back({3, 2});
    adj[3].push_back({2, 2});
    adj[3].push_back({4, 4});
    adj[3].push_back({5, 5});
    adj[4].push_back({3, 4});
    adj[5].push_back({3, 5});
    
    // Menjalankan algoritma Dijkstra dimulai dari node 1
    dijkstra(1);
    
    // (Opsional) Menampilkan hasil jarak terpendek dari node 1 ke node lainnya
//    cout << "Jarak terpendek dari node 1:\n";
    
    cout << "Jarak terpendek dari node 1 ke 5 adalah \n" << dist[5] <<endl;

    
    
//    for (int i = 1; i <= 5; i++) {
//        cout << "Ke node " << i << " = " << dist[i] << "\n";
//    }
    
    return 0;
}

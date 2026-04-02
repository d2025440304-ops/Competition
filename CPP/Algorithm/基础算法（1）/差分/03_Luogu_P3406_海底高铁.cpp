#include <iostream>
#include <vector>
using namespace std;
typedef long long LL;

int main()
{
    int n, m;
    cin >> n >> m;
    
    vector<int> v(m);  // 访问的城市序列
    for(int i = 0; i < m; i++)
    {
        cin >> v[i];
        v[i]--;  // 0索引
    }
    
    // 保存每条铁路的信息：{起点, 终点, a, b, c}
    vector<tuple<int, int, LL, LL, LL>> railways(n-1);
    
    for(int i = 0; i < n-1; i++)
    {
        int u, v;
        LL a, b, c;
        cin >> u >> v >> a >> b >> c;
        u--; v--;  // 0索引
        railways[i] = make_tuple(u, v, a, b, c);
    }
    
    // 记录每条铁路的使用次数
    vector<LL> freq(n-1, 0);
    
    // 遍历访问序列，计算每条铁路的使用次数
    for(int i = 0; i < m-1; i++)
    {
        int from = v[i];
        int to = v[i+1];
        
        // 在railways中找到连接from和to的铁路
        for(int j = 0; j < n-1; j++)
        {
            int u, v;
            LL a, b, c;
            tie(u, v, a, b, c) = railways[j];
            
            if((u == from && v == to) || (u == to && v == from))
            {
                freq[j]++;
                break;
            }
        }
    }
    
    LL totalCost = 0;
    
    // 对每条铁路计算最小成本
    for(int i = 0; i < n-1; i++)
    {
        int u, v;
        LL a, b, c;
        tie(u, v, a, b, c) = railways[i];
        
        // 选择: 纸质车票 vs IC卡
        LL ticketCost = a * freq[i];           // 买纸质车票总费用
        LL cardCost = b + c * freq[i];         // 买IC卡工本费 + 充值费用
        
        totalCost += min(ticketCost, cardCost);
    }
    
    cout << totalCost << endl;

    return 0;
}
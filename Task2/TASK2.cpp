#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define MaxNode 100

const int max_value = 1e5+10;
vector<int>adjlist[max_value];
bool visited[max_value];
vector<int> print;

void BFS(int u)
{
    queue<int>q;
    q.push(u);
    visited[u] = true;
    while(!q.empty())
    {
        u = q.front();
        q.pop();
        print.push_back(u);
        for(int v:adjlist[u])
        {
            if(!visited[v])
            {
                q.push(v);
                visited[v] = true;
            }
        }
    }
}
void printbfs(int end_Point)
{
    for(int i:print)
    {
        cout<<i<<" ";
        if(i==end_Point)
        {

            cout<<endl;
            break;
        }
    }
}
int main()
{
    freopen("input2.txt","r",stdin);
    freopen("output2.txt","w",stdout);
    int place, connection;
    cin >> place >> connection;
    for(int i = 0; i < connection; i ++){
        int one, two;
        cin >> one >> two;
        adjlist[one].push_back(two);
    }
    for(int i = 1; i<=place; i++){
        if(!visited[i]){
            BFS(i);
        }
    }
    printbfs(place);
    return 0;
}

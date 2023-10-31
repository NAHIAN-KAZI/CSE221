#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MaxNode 100
const int _max=1e5+10;

vector<int>adjlist[_max];
bool visited[_max];
vector<int>print;

void dfs(int u)
{
    visited[u] = 1;
    print.push_back(u);
    for(int v: adjlist[u])
    {
        if(!visited[v])
        {
            if(!visited[v])
            {
                dfs[v];
            }
        }
    }
}
void printdfs(int end_point)
{

    for(int i:print)
    {
        cout<<i<<" ";
        if(i==end_point)
        {
            cout<<endl;
            break;
        }
    }
}

int main()
{
    freopen("input3.txt","r",stdin);
    freopen("output3.txt","w",stdout);
    int place, connection;
    cin >> place >> connection;
    for(int i = 0; i < connection; i++)
    {
        int one, two;
        cin >> one >> two;
        adjlist[one].push_back(two);
    }
    for(int i = 1; i<=place; i++)
    {
        if(!visited[i])
        {
            dfs(i);
        }
    }
    printdfs(place);
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MaxNode 100

typedef struct Node
{
    int vertexNum;
    struct Node *next;
} Node;
typedef struct List
{
    Node *head;
} List;
List *adjList[MaxNode] = {0};

void addNode(int a, int b)
{
    Node*designed,*temp,*src;
    if(adjList[a]->head==NULL)
    {
        src = new Node;
        src->vertexNum = a;
        src->next = NULL;
        adjList[a]->head = src;
    }
    designed = new Node;
    designed->vertexNum=b;
    designed->next = NULL;
    temp = adjList[a]->head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = designed;
}
void print(int connectionNum)
{
    cout<<connectionNum<<endl;
    for(int i =0;i<=connectionNum;i++)
    {
        Node*p = adjList[i]->head;
        if(p==NULL)
        {
            cout<<i<<endl;
        }
        while(p!=NULL)
        {
            cout<<p->vertexNum<<" ";
            p=p->next;
        }
        cout<<endl;
    }
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    for(int i = 0;i<MaxNode;i++)
    {
        adjList[i] = new List;
        adjList[i]->head = NULL;
    }
    int place;
    int connection;
    cout<<"Enter place & connection: ";
    cin>>place>>connection;


    for(int i = 0;i<connection;i++)
    {
        int one,two;
        cin>>one>>two;
        addNode(one,two);
    }
    print(place);
    return 0;
}



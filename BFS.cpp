#include <iostream>
#include <queue>

#define MAX_NODES 100

using namespace std;

class Node
{
public:
    int value;
    Node *next;
};
void add_edge(Node *array[], int src, int dest)
{
    Node *ptr = new Node();
    ptr->value = dest;
    ptr->next = array[src];

    array[src] = ptr;
}
void bfs(Node *array[], int start, bool visited[])
{
    queue<int> q; // for bfs
    visited[start] = true;
    q.push(start);

    while (!q.empty())
    {
        int current = q.front();
        cout << current;

        q.pop();

        Node *temp = array[current];
        while (temp != nullptr)
        {
            int near = temp->value;
            if (!visited[near])
            {
                visited[near] = true;
                q.push(near);
            }
            temp = temp->next;
        }
    }
}
int main()
{

    Node *adj[MAX_NODES] = {nullptr};
    add_edge(adj, 2, 5);
    add_edge(adj, 5, 3);
    add_edge(adj, 5, 4);
    add_edge(adj, 4, 7);
    add_edge(adj, 7, 2);
    bool visited[MAX_NODES] = {false};
    bfs(adj, 3, visited);

    return 0;
}

/*
2->5->4
4->7
7->2

3->5




*/

#include<iostream>
#include<queue>
using namespace std;
void bfs(int graph[10][10],int start,int n){
    bool visited[10]={false};
    int queue[10],front=0,rear=0;
    queue[rear++]=start;
    visited[start]=true;
    cout<<"BFS TRAVERSAL:";
    while(front<rear){
        int currunt=queue[front++];
        cout<<currunt<<" ";

        for(int i=0;i<n;++i){
            if(graph[currunt][i]==1&&!visited[i]){
                queue[rear++]=i;
                visited[i]=true;
            }
        }

    }
    cout<<endl;
}
int main(){
    int n,graph[10][10],x;
    cout<<"Enter the no. of nodes:";
    cin>>n;
    cout<<"Enter the adjacent matrix";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>graph[i][j];
        }
    }
    cout<<"Enter the starting element";
    cin>>x;
    bfs(graph,x,n);
    return 0;
}
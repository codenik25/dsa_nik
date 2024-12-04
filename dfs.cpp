#include<iostream>
using namespace std;
void dfs(int graph[10][10],int n,int start){
    bool visited[10]={false};
    int stack[10],top=-1;
    stack[++top]=start;
    cout<<"DFS Traversal";
    while(top>=0){
        int currunt=stack[top--];
        if(!visited[currunt]){
            cout<<currunt<<" ";
            visited[currunt]=true;
        }

        for(int i=n-1;i>=0;--i){
            if(graph[currunt][i]==1&&!visited[i]){
                stack[++top]=i;
            }
        }
    }
    cout<<endl;
}
int main(){
    int n,start,graph[10][10];
    cout<<"Enter the no of nodes";
    cin>>n;
    cout<<"Enter the adjacent matrix:";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>graph[i][j];

        }
        
    }
    cout<<"Enter the staring number:";
        cin>>start;
        dfs(graph,n,start);
}
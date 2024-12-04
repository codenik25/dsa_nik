#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cout<<"Enter the number of rows";
    cin>>n;
    cout<<"Enter the number of column";
    cin>>m;
    int a[n][m],b[n][m],c[n][m];
    cout<<"Enter elements of 1sst array";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Enter elements of 2nd array";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>b[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    cout<<"The sum of 1st and 2nd array is "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<c[i][j];
            cout<<endl;
            
        }
        
    }
    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    int a[2][2],b[2][2],c[2][2];
    cout<<"Enter elements of 1sst array"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Enter elements of 2nd array"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>b[i][j];
        }
    }
    // c[0][1]=a[0][1]; //transpose for 1st arrays
    // a[0][1]=a[1][0];
    // a[1][0]=c[0][1];

    // c[0][1]=b[0][1]; //transpose for 2nd arrays
    // b[0][1]=b[1][0];
    // b[1][0]=c[0][1];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            c[i][j]=a[j][i];
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            a[i][j]=b[j][i];
        }
    }

     cout<<"The transpose of 1st array is "<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<c[i][j];
            cout<<endl;
            
        }
        
    }
     cout<<"The transpose of 2nd array is "<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<a[i][j];
            cout<<endl;
            
        }
        
    }
    return 0;
}
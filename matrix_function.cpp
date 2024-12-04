#include<iostream>
using namespace std;
int **n,**m;
int input(int n,m){
   
    cout<<"Enter elements of 1sst array";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Enter elements of 2nd array";
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>b[i][j];
        }
    }
}
int add(){
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    } 
}
int print_add(){
     for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<c[i][j];
            cout<<endl;
            
        }
        
    }
}
int sub(){
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            c[i][j]=a[i][j]-b[i][j];
        }
    } 
}
int print_sub(){
     for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<c[i][j];
            cout<<endl;
            
        }
        
    }
}
int transpose(){
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
}
int print_transpose(){
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
}
int multi(){
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            c[i][j]=0;
        }
    }
    for(int i=0;i<2;i++){

    
    for(int j=0;j<2;j++)
    {
        for(int k=0;k<2;k++){
            c[i][j]+=(a[i][k]*b[k][j]);
        }
    }
    }
}
int print_multi(){
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<c[i][j]<<" ";       
        }
        cout<<endl;
        
    }
}
int main()
{
    int **a,**b,**c;
    input();
    add();
    cout<<"The sum of a and b is";
    print_add();
    cout<<"The Substraction of a and b is";
    sub();
    print_sub();
    transpose();
    print_transpose();
    multi();
    print_multi();
    return 0;
}
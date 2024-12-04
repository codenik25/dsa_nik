#include<iostream>
using namespace std;
int n,m;
int **input(int n,int m){
    int **a1=new int *[n];
    for(int i=0;i<n;i++){
        a1[i]=new int[m];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a1[i][j];
        }
        cout<<endl;
    }
    return a1;
}
int **print(int **p){
   
     for(int i=0;i<n;i++){
        
        for(int j=0;j<m;j++){
            cout<<p[i][j]<<" ";
           
            
        }
         cout<<endl;
        
    }

}
int **sum(int **a1,int **a2){
    int **c=new int *[n];
    
    for(int i=0;i<n;i++){
         c[i]=new int[m];
        for(int j=0;j<m;j++){
            c[i][j]=a1[i][j]+a2[i][j];
        }
    }
    return c;
}
int **subs(int **a1,int **a2){
     int **c=new int *[n];
    
    for(int i=0;i<n;i++){
         c[i]=new int[m];
        for(int j=0;j<m;j++){
            c[i][j]=a1[i][j]-a2[i][j];
        }
    }
    return c;
}
int **transpose(int **a1){
     int **c=new int *[n];
    
    for(int i=0;i<n;i++){
         c[i]=new int[m];
        for(int j=0;j<m;j++){
            c[i][j]=a1[j][i];
        }
    }
    return c;
}
int **multiply(int **a1,int **a2){
     int **c=new int *[n];
    
    for(int i=0;i<n;i++){
         c[i]=new int[m];
        for(int j=0;j<m;j++){
            c[i][j]=0;
            for(int k=0;k<m;k++){
                c[i][j]+=(a1[i][k]*a2[k][j]);
            }
        }
    }
    return c;
}
int main()
{
    
    cout<<"Enter the no. of rows"<<endl;
    cin>>n;
    cout<<"Enter the no. of column"<<endl;
    cin>>m;
    cout<<"Enter the value of matrix 1"<<endl;
    int **a1=input(n,m);
    cout<<"Enter the value of matrix 2"<<endl;
    int **a2=input(n,m);
    cout<<"The sum of two matrix is "<<endl;
    print(sum(a1,a2));
    cout<<"The substract of two matrix is "<<endl;
    print(subs(a1,a2));
    cout<<"The transpose of these two matrix is "<<endl;
    print(transpose(a1));
    print(transpose(a2));
    cout<<"The multiply of two matrix is "<<endl;
    print(multiply(a1,a2));


    return 0;
}
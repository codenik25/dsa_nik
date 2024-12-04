#include<iostream>
using namespace std;
int main()
{
    int a[5],x,loc=-1,n=5;
    cout<<"Enter the element:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the number you search:";
    cin>>x;
    for(int i=0;i<n;i++){
    if(x==a[i]){
        loc=i;
        break;
    }
    }
    if(loc==-1){
        cout<<"Failed to search";
    }
    else{
        cout<<"The array index is :";
        cout<<loc;
    }
    return 0;
}
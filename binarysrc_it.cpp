#include<iostream>
using namespace std;
void input(int n,int a[]){
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
int binarysrcit(int x,int low,int high,int a[]){
    while(low<=high){
        int mid=low+(high-low)/2;
        if(a[mid]==x){
            return mid;
        }
        if(a[mid]<=x){
            low=mid=+1; // For recursive we write return function(x,mid+1,high,a)
        }
        else{
            high=mid-1;  // For recursive we write return function(x,low,mid-1,a)
        }
    }
    return -1;
}
int main(){
    int n,a[n],x;
    cout<<"Enter the no of input";
    cin>>n;
    cout<<"Enter the value";
    input(n,a);
    cout<<"Enter the value you search";
    cin>>x;
    int result=binarysrcit(x,0,n-1,a);
    if(result==-1){
        cout<<"Your seaching value is not there";
    }
    else{
        cout<<"Your index value is"<<result;
    }
    return 0;
}
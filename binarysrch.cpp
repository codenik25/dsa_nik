#include<iostream>
using namespace std;
void input(int n,int a[]){
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
int binarysearch(int a[],int low,int high,int x){
    while(low<=high){
        int mid=low+(high-low)/2;
        if(a[mid]==x){
            return mid;
        }
        if(a[mid]<=x){
            binarysearch(a,mid+1,high,x);
        }
        else{
            binarysearch(a,low,mid-1,x);
        }
    }
    return -1;
}
int main()
{
    int n,a[n],x,low,high;
    cout<<"Enter the no. of input";
    cin>>n;
    cout<<"Enter the element";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the element for search:";
    cin>>x;
    int result=binarysearch(a,0,n-1,x);
    if(result==-1){
        cout<<"Failed Result";
    
    }
    else{
        cout<<"The array index is:";
        cout<<result;
    }
    
    return 0;
}
#include<iostream>
using namespace std;
void input(int a[],int n){
    cout<<"Enter the value"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
void merge(int a[],int l,int mid,int r){
    int an=mid-l+1;
    int bn=r-mid;
    //create 2 temp arrays
    int a1[an];
    int b[bn];

    for(int i=0;i<an;i++){
        a1[i]=a[l+i];
    }
    for(int j=0;j<bn;j++){
        b[j]=a[mid+1+j];
    }

    int i=0;    //index of first subarrays
    int j=0;    //second subarryas
    int k=l;    //initial index of merged subarrays
    while(i<an&&j<bn){
        if(a1[i]<b[j]){
            a[k++]=a1[i++];
        }
        else{
            a[k++]=b[j++];
        }
    }
    while(i<an){
        a[k++]=a1[i++];
    }
    while(j<bn){
        a[k++]=b[j++];
    }

}
void mergeSort(int a[],int l,int r){
    //base case
    if(l>=r){
        return;
    }
    int mid=(l+r)/2;
    mergeSort(a,l,mid);
    mergeSort(a,mid+1,r);
    merge(a,l,mid,r);
}
int main()
{
    int n;
    cout<<"Enter the no of value"<<endl;
    cin>>n;
    int a[n];
    input(a,n);
    mergeSort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
#include<iostream>
using namespace std;
void input(int n,int a[]){
    cout<<"Enter the value"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
int insertsort(int n, int a[]){
    for(int i=1;i<n;i++){
        int current=a[i];
        int j=i-1;
        while(a[j]>current && j>=0){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=current;
    }
}
int bubblesort(int n,int a[]){
    for(int i=0;i<n-1;i++){
        bool swp=false;
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                swp=true;
            }
        } 
        if(swp==false){
            break;
        }
     }
}
int selectionsort(int n,int a[])
{

    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
                min = j;
        }
        if (min != i)
            swap(a[min], a[i]); 
    }
}

// int sortk(int n,int a[],int k){
//     for(int i=0;i<k;i++){
//         cout<<a[n-i-1]<<endl;
//     }
// }
void print(int n,int a[]){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n,k;
    cout<<"Enter the no of value"<<endl;
    cin>>n;
    int a[n];
    input(n,a);
    // insertsort(n,a);
    // bubblesort(n,a);
    selectionsort(n,a);
    print(n,a);
   
    // cout<<"Enter the value for maximum"<<endl;
    // cin>>k;
    // sortk(n,a,k);

    return 0;
}
#include<iostream>
using namespace std;
void TOH(int n , char BG , char AX , char ED){
    if(n==1){
        cout<<"Move Disk " << n << " From " << BG << " to " << ED << endl;
        return ;
    }
    TOH(n-1 , BG , ED , AX);
    cout<< " Move Disk " << n << " from " << BG << " to " << ED << endl;
    TOH(n-1 , AX , BG , ED);
}

int main(){
    int n;
    cout<< "Enter no. of disks: ";
    cin>>n;

    TOH(n , 'A' , 'B' , 'C');

    return 0;
}
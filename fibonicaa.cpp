#include<iostream>
using namespace std;
int fibb(int x){
    if(x==0||x==1){
        return x;
    }
    else{
        return (fibb(x-1)+fibb(x-2));
    }
}
int main()
{
    int n,i=0;
    cout<<"Enter the value";
    cin>>n;
    while(i<n){
        cout<<" "<<fibb(i);
        i++;
    }
    return 0;
}

// #include<iostream>
// using namespace std;
// void fib(int num) {
//    int x = 0, y = 1, z = 0;

//    for (int i = 0; i < num; i++) {
//       cout << x << " ";
//       z = x + y;
//       x = y;
//       y = z;
//    }
// }
// int main() {
//    int num;
//    cout << "Enter the number : ";
//    cin >> num;
//    cout << "\nThe fibonacci series : " ;
//    fib(num);
//    return 0;
// }
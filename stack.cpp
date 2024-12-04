#include<iostream>
using namespace std;
int stack[100],choice,n,top,x,i;
void push(){
    if(top==n-1){
        cout<<"Overflow";
    }
    else{
        cout<<"Enter value to be inserted";
        cin>>x;
    }
    top=top+1;
    stack[top]=x;
}
int pop(){
    int x=-1;
    if(top>=0){
        int x=stack[top];
        top--;
    }
    else{
        cout<<"Stack Underflow"<<endl;
    }
    return x;
}
void display(){
    if(top>-1){
        for(int i=top;i>=0;i--){
            cout<<stack[i]<<endl;
        }
    }
    else{
        cout<<"Empty Stack"<<endl;
    }
}
int main()
{
    top=-1;
    cout<<"Enter the size of stack,max=100";
    cin>>n;
   
    do{
        cout<<"1. Push\t 2. POP\t 3. Display\t 4. Exit";
    cin>>choice;
        switch(choice){
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;

            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                cout<<"Exit";
                break;
            }
            default:
            {
                cout<<"Enter valid choice";
            }
        }
    }while(choice!=4);


    return 0;
}
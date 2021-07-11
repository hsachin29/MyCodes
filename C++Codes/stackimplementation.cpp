#include<iostream>
using namespace std;
class Stack{
    public:
    int top;
    int maxSize;
    int* array;
    Stack(int max){
        top=-1;
        maxSize=max;
        array=new int[max];
    }
    int isFull(){
        if(top==maxSize-1)
        cout<<"Will not be able to push stack overflow"<<endl;
        return top==maxSize-1;
    }
    int isEmpty(){
        if(top==-1)
        cout<<"will not be able to pop Stack is empty"<<endl;
        return top==-1;
    }
    void push(int item){
        if(isFull()) return;
        array[++top]=item;
        cout<<"Pushed "<<item<<" to stack"<<endl;
    }
    int pop(){
        if(isEmpty()) return INT8_MIN;
        return array[top--];
    }
    int peek(){
        if(isEmpty()) return INT8_MIN;
        return array[top];
    }
};
int main(){
    Stack st(10);
    st.push(5);
    st.push(64);
    st.push(14);
    st.push(89);
    int flag=1;
    while (flag)
    {
        if(!st.isEmpty())
          cout<<"Popped "<<st.pop()<<" from stack"<<endl;
        else
          cout<<"Can't Pop more, stack is empty\n";
          cout<<"Do you want to Pop again? Yes: 1 No: 0\n";
          cin>>flag;
    }

}
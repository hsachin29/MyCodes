#include<iostream>
using namespace std;
#define n 20

class queue{
    int* array;
    int front;
    int back;
     public:
      queue(){
          array=new int [n];
          front=-1;
          back=-1;
      }
    void enqueue(int x){
        if(back==n-1){
            cout<<"Queue is overflow"<<endl;
            return;
        }
        back++;
        array[back]=x;
        if(front==-1){
            front++;
        }
    }
    void dequeue(){
        if(front==-1 || front>back){
            cout<<"No element in Queue"<<endl;
            return;
        }
        front++;
    }
    int peek(){
        if(front==-1 || front>back){
            cout<<"No element in Queue"<<endl;
            return -1;
        }
        return array[front];
    }
    bool empty(){
        if(front==-1 || front>back){
            return true;
        }
        return false;
    }

};
int main(){
    queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(45);

    cout<<q.peek()<<endl;
    q.dequeue();

    cout<<q.peek()<<endl;
    q.dequeue();

    cout<<q.peek()<<endl;
    q.dequeue();
    return 0;
}
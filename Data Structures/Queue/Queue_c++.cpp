#include<iostream>
using namespace std;


class queue{

public:
    int size;
    int f;
    int b;
    int *  arr;
    queue(int x){
        size = x;
        f = b = -1;
        arr = new int(size);
    }
    void enqueue(int x);
    int dequeue();
    int peek(int i);
    bool isEmpty();
    bool isFull();
    
};

int main(){
    queue q1(3);
    q1.enqueue(1);
    q1.enqueue(2);
    q1.enqueue(3);
    // q1.enqueue(3);
    // q1.enqueue(3);
    cout<<q1.dequeue()<<"\n";
    cout<<q1.dequeue()<<"\n";
    cout<<q1.dequeue()<<"\n";
    // cout<<q1.dequeue()<<"\n";
    cout<<q1.dequeue()<<"\n";
    
    
    



    return 0;

}

bool queue::isEmpty(){
    
    return this->f==this->b?true:false;
}

bool queue:: isFull(){

    return this->b == this->size-1?true:false;
}

void queue::enqueue(int x){
    if(this->isFull()){
        cout<<__LINE__<<endl;
        throw invalid_argument("queue overflow at");
    }

    this->arr[++b] = x;


}
int queue::dequeue(){
    if(this->isEmpty()){
        cout<<__LINE__<<endl;
        throw invalid_argument("queue underflow");
    }

    
    return this->arr[++(this->f)];


}





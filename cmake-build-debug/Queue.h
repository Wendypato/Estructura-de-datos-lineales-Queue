//
// Created by Wendy on 27/09/2024.
//

#ifndef QUEUE_H
#define QUEUE_H



class Queue {
private:
    int front;
    int rear;
    int size;
    int* queue;
public:
    Queue(int capacity);
    bool isEmpty();
    bool isFull();
    void enqueu(int value);
    void dequeue();
    int frontElement();
    ~Queue();


};



#endif //QUEUE_H

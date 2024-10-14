#include <iostream>

#include "cmake-build-debug/Queue.h"

using namespace std;



int main()
{
    Queue q(5);
    q.enqueu(10);
    q.enqueu(50);

    q.dequeue();
    q.dequeue();

    cout<<"El front del element es: "<<q.frontElement()<<endl;

    return 0;
}

#include "a_queue.h"

class Int_array_queue : public AbstractQueue
{
private:
    int* data;
    int size;
    int front;
    int back;
    int count;
public:
    Int_array_queue(int size);
    ~Int_array_queue();

    // Override all pure virtual functions from AbstractQueue
    void enqueue(int value) override;
    int dequeue() override;
    bool Empty() override;
    bool Full() override;
};


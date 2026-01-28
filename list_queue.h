#include "a_queue.h"

// linkes list, med tal og pointer til næste node.
struct Node {
    int data;
    Node* next;
};

class ListQueue : public AbstractQueue {
private:
    Node* front; // Pointer til starten af køen 
    Node* rear;  // Pointer til slutningen af køen

public:
    // Constructor
    ListQueue();


    // Implementering af de virtuelle funktioner
    void enqueue(int element) override;
    int dequeue() override;
    bool Empty() override;
    bool Full() override;

    // Destructor 
    ~ListQueue();
};



// Abstrakt klasse
class AbstractQueue {
public:
    
    // Tilføj et tal til køen
    virtual void enqueue(int data) = 0;

    // Fjern og returner det forreste tal
    virtual int dequeue() = 0;

    // Tjek om køen er tom
    virtual bool Empty() = 0;

    // Tjek om køen er fuld
    virtual bool Full() = 0;

    // Virtuel destructor 
    virtual ~AbstractQueue() {}
};
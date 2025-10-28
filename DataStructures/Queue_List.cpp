#include <iostream>
using namespace std;

// Node class
class Node {
public:
    int data;
    Node* next;
    Node(int new_data) {
        data = new_data;
        next = NULL;
    }
};

// Queue class
class myQueue {
private:
    int currSize;
    Node* front;
    Node* rear;

public:
    myQueue() {
        currSize = 0;
        front = rear= NULL;
    }

    // Check if empty
    bool isEmpty() {
        return front == NULL;
    }

    // Enqueue
    void enqueue(int new_data) {
        Node* node = new Node(new_data);
        if (isEmpty()) {
            front = rear = node;
        } else {
            rear->next = node;
            rear = node;
        }
        
        currSize++;
    }

    // Dequeue
    int dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow" << endl;
            return -1;
        }
        
        Node* temp = front;
        int removedData = temp->data;
        front = front->next;
        
        if (front == NULL) rear = NULL;
        delete temp;
        
        currSize--;
        return removedData;
    }

    // Get front element
    int getfront() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return front->data;
    }

    // Get size
    int size() {
       return currSize;
    }
};
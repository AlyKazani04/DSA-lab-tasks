#include <iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node* next;

        Node(int val = 0)
        {   
            data = val;
            next = nullptr;
        }
};

class SinglyLinkedList
{
    private:
        Node* head;
        Node* tail;
    public:
        SinglyLinkedList()
        {
            head = nullptr;
            tail = nullptr;
        }
 
        void addNodeatStart(int val)
        {
            Node* newNode = new Node(val);

            if(head == nullptr)
            {
                head = newNode;
                tail = newNode;
                return;
            }

            newNode->next = head;
            head = newNode;
        }

        void addNodeatEnd(int val)
        {
            Node* newNode = new Node(val);
            
            if(head == nullptr)
            {
                head = newNode;
                tail = newNode;
                return;
            }

            tail->next = newNode;
            tail = newNode;
        }
};

int main()
{
    SinglyLinkedList list();


    return 0;
}
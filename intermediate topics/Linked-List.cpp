// Linked lists are a dynamic data structure where elements are stored in nodes, 
// and each node contains a reference (or pointer) to the next node in the sequence.
// Linked lists can efficiently add or remove elements from any position, unlike arrays which have fixed sizes.


#include <iostream>

// Node struct
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};


class LinkedList {
    private:
        Node* head;

    public:
        LinkedList() : head(nullptr) {}

        void insertFront(int val) {
            Node* newNode = new Node(val);
            newNode->next = head;
            head = newNode;                       // every new element is made head so that we can point to the last element added. 
        }

        //(pop_front)   // deleting latest element added
        void removeFront() {
            if (head) {
                Node* temp = head;
                head = head->next;
                delete temp;
            }
        }

        void printList() {
            Node* current = head;
            std::cout << "Linked List: ";
            while (current) {
                std::cout << current->data << " ";
                current = current->next;
            }
            std::cout << std::endl;
        }
};

int main() {
    // Creating a LL object
    LinkedList list;

    list.insertFront(3);
    list.insertFront(2);
    list.insertFront(1);

        //(3) <- (2) <- (1)
        //               ^
        //              head 


    list.printList();

    list.removeFront();

    //upadated list...
    list.printList();

    return 0;
}

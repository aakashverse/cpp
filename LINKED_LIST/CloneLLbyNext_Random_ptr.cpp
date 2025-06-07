#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;           
    Node *next;        
    Node *random;       

    Node(int value){
        data = value;
        next = NULL;
        random = NULL;
    }
};


// Function to clone the linked list
Node *cloneLL(Node *head){
    Node* temp = head;
    // Create an unordered_map to map original
    // nodes to their corresponding copied nodes
    unordered_map<Node*, Node*> mpp;

    // Step 1: Create copies of each node
    // and store them in the map
    while(temp != NULL){
        // Create a new node with the
        // same data as the original node
        Node* newNode = new Node(temp->data);
        // Map the original node to its
        // corresponding copied node in the map
        mpp[temp] = newNode;
        // Move to the next node in the original list
        temp = temp->next;
    }
    
    temp = head;
    // Step 2: Connect the next and random
    // pointers of the copied nodes using the map
    while(temp != NULL){
        // Access the copied node corresponding
        // to the current original node
        Node* copyNode = mpp[temp];
        // Set the next pointer of the copied node
        // to the copied node mapped to the
        // next node in the original list
        copyNode->next = mpp[temp->next];
        // Set the random pointer of the copied node
        // to the copied node mapped to the
        // random node in the original list
        copyNode->random = mpp[temp->random];
        // Move to the next node
        // in the original list
        temp = temp->next;
    }
    
    // Return the head of the
    // deep copied list from the map
    return mpp[head];
}


// Function to print the cloned linked list
void printClonedLinkedList(Node *head) {
    while (head != nullptr) {
        cout << "Data: " << head->data;
        if (head->random != nullptr) {
            cout << ", Random: " << head->random->data;
        } else {
            cout << ", Random: nullptr";
        }
        cout << endl;
         // Move to the next node
        head = head->next;  
    }
}

// Main function
int main() {
    // Example linked list: 7 -> 14 -> 21 -> 28
    Node* head = new Node(7);
    head->next = new Node(14);
    head->next->next = new Node(21);
    head->next->next->next = new Node(28);

    // Assigning random pointers
    head->random = head->next->next;
    head->next->random = head;
    head->next->next->random = head->next->next->next;
    head->next->next->next->random = head->next;

    cout << "Original Linked List with Random Pointers:" << endl;
    printClonedLinkedList(head);

    // Clone the linked list
    Node* clonedList = cloneLL(head);

    cout << "\nCloned Linked List with Random Pointers:" << endl;
    printClonedLinkedList(clonedList);

    return 0;
}
                                
                            
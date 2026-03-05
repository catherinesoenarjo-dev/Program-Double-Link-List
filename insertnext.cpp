#include <iostream>
using namespace std;

struct Node {
    int data; // value
    Node* next; // pointer
};

void insertNext(Node* prevNode,int value){
    Node* newNode = new Node;
    newNode -> data = value;
    newNode -> next = prevNode->next;
    prevNode->next = newNode;
}


int main (){
    Node* head = new Node;
    head -> data = 60;
    head -> next = NULL;
    
    Node* node2 = new Node;
    node2 -> data = 75;
    node2 -> next = NULL;
    head -> next = node2;

    insertNext (head,88);

    Node* temp = head;
    while (temp !=NULL){
        cout << temp -> data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
    return 0;
}
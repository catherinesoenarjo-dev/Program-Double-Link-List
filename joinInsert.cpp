#include <iostream>
using namespace std;

struct Node {
    int data; // value
    Node* next; // pointer
};

void insertFirst(Node* & head,int value){
    Node* newNode = new Node;
    newNode -> data = value;
    newNode -> next = head;
    head = newNode;
};

void insertNext(Node* prevNode,int value){
    Node* newNode = new Node;
    newNode -> data = value;
    newNode -> next = prevNode->next;
    prevNode->next = newNode;
}

void insertLast(Node* & head,int value){
    Node* newNode = new Node;
    newNode -> data = value;
    newNode -> next = NULL;
    
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next !=NULL){
        temp = temp -> next;
    }
    temp ->next = newNode;
}

int main (){
    Node* head = NULL;
    Node* node1 = new Node;
    node1 -> data = 60;
    node1 -> next = NULL;
    head = node1;


    Node* node2 = new Node;
    node2 -> data = 75;
    node2 -> next = NULL;
    head -> next = node2;


    Node* node3 = new Node;
    node3 -> data = 90;
    node3 -> next = NULL;
    node2 -> next = node3;

    insertFirst (head,50);
    insertNext (node2,88);
    insertLast (head,99);

    Node* temp = head;
    while (temp !=NULL){
        cout << temp -> data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
    return 0;
}
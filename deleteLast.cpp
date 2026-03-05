#include <iostream>
using namespace std;

struct Node {
    int data; // value
    Node* next; // pointer
};

void deleteLast(Node* & head){
    if (head == NULL){
        return;
    }
    
    if (head->next == NULL){
        delete head;
        head = NULL;
        return;
    }
    Node* temp = head;

    while (temp->next->next != NULL){
        temp = temp->next;
    } 

    delete temp->next;     // hapus node terakhir
    temp->next = NULL;
}


int main (){
    Node* head = new Node;
    head -> data = 60;
    head -> next = NULL;
    
    Node* node2 = new Node;
    node2 -> data = 75;
    node2 -> next = NULL;
    head -> next = node2;

    Node* node3 = new Node;
    node3 -> data = 90;
    node3 -> next = NULL;
    node2 -> next = node3;

    deleteLast (head);

    Node* temp = head;
    while (temp !=NULL){
        cout << temp -> data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
     int num;
     node* next;
     node(int a){
        num=a;
        next=NULL;
     }
};
//function to insert node at  the end of the list

void insertNode(node* &head,int val){
    node* newNode = new node(val);
    if(head==NULL){
        head=newNode;
        return;
    }
    node*temp=head;
    while(temp->next!=NULL) temp = temp->next;
    temp->next =newNode;
}

//function to get reference of the nodeto delete

node* getNode(node* head,int val){
while(head->num!=val) head=head->next;

return head;
}

//delete function 
void deleteNode(node* temp){
    temp->num=temp->next->num;
    temp->next=temp->next->next;
    return;
}

void printList(node* head) {
    while(head->next != NULL) {
        cout<<head->num<<"->";
        head = head->next;
    }
    cout<<head->num<<"\n";
}

int main() {
    node* head = NULL;
    //inserting node
    insertNode(head,1);
    insertNode(head,4);
    insertNode(head,2);
    insertNode(head,3);
    //printing given list
    cout<<"Given Linked List:\n";
    printList(head);
    node* t = getNode(head,2);
    //delete node
    deleteNode(t);
    //list after deletion operation
    cout<<"Linked List after deletion:\n";
    printList(head);
    return 0;
}
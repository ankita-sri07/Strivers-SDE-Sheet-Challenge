#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*next;
    Node(int number){
        data=number;
        next=NULL;
    }
};
Node*DeleteNode(int data){
    Node*p;
    p->data=p->next->data;
    p->next=p->next->next;
    return p;
}

int main(){
int n;
    cout<<"how many no you want to store in linked list ";
    cin>>n;
    Node*head=NULL;
    Node*p;

    while(n!=0){
       int num;
       cout<<"please enter the number that you want to store ";
       cin>>num;

       Node*nw=new Node(num);
       
       if(head==NULL){
        head=nw;
        p=nw;
       }
       else{
        p->next=nw;
        p=p->next;
       }
       n--;
    }
//print the list
    p=head;
    while(p!=NULL){
     cout<<p->data<<endl;
     p=p->next; //(for jumping next node)
    }

    cout<<"Enter the node which you want to delete ";
    int delno;
    cin>>delno;
    head=DeleteNode(delno);
    p=head;
    while(p!=NULL){
     cout<<p->data<<endl;
     p=p->next; //(for jumping next node)
    }
    return 0;
}
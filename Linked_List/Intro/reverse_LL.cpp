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
Node*reverseList(Node*head){
    Node*dummy=NULL;
    while(head!=NULL){
        Node*next=head->next;
        head->next=dummy; //for break the link
        dummy=head;
        head=next;
    }
    return dummy;
}
int main(){
    int n;
    cout<<"Enter the number of node that you want to store in list ";
    cin>>n;
    Node*head=NULL;
    Node*p;
    while(n!=0){
        int num;
        cout<<"Enter the data you want to store ";
        cin>>num;

        Node*nw=new Node(num);
        if(head==NULL){
            head=nw;
            p=nw;
        }else{
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
   head= reverseList(head);
    cout<<"Reverse list is "; 
     p=head;
    while(p!=NULL){
     cout<<p->data<<" ";
     p=p->next; //(for jumping next node)
    }
    return 0;
}
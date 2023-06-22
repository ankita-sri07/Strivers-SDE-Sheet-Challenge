#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;

    ListNode(int x):val(x),next(nullptr){}
};

ListNode* mergeSortedLists(ListNode* l1, ListNode* l2){
    ListNode dummy(0); // create a dummy node for merged list
    ListNode* curr = &dummy; // Pointer to the current node of the merge list
    while(l1&&l2){
        if(l1->val <= l2->val){
            curr->next = l1;
            l1 = l1->next;
        }
        else{
            curr->next = l2;
            l2 = l2->next;
        }
        curr=curr->next;
    }
    //Attach the remaining nodes of the non-empty lsit
    curr->next = l1?l1:l2;
    //return the head of the merged list (excluding the dummy)
    return dummy.next;    
}
// Function toprint the linked list
void printList(ListNode* head){
    while(head){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}

int main(){
    //create two sorted Linked List
    //l1: 1->3->5->7
    ListNode* l1 = new ListNode(1);
    l1->next =new ListNode(3);
    l1->next->next=new ListNode(5);
    l1->next->next->next= new ListNode(7);
    
    // l2: 2->4->6
    ListNode* l2 = new ListNode(2);
    l2->next= new ListNode(4);
    l2->next->next= new ListNode(6);

    ListNode* merged = mergeSortedLists(l1,l2);

    //print the merged list

    printList(merged);

    return 0;
}
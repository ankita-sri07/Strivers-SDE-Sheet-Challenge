// Naive Solution

#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode *removeNthFromEnd(ListNode *head, int n)
{
    // calculate the length of LL
    int length = 0;
    ListNode *current = head;
    while (current)
    {
        length++;
        current = current->next;
    }

    // handle the case where the head needs tobe removed

    if (length == n)
    {
        ListNode *newHead = head->next;
        delete head;
        return newHead;
    }
    // Find the node before the nth node from the end
    int stepsToMove = length - n - 1;
    current = head;
    while (stepsToMove > 0)
    {
        current = current->next;
        stepsToMove--;
    }
    // Remove thr nth node from the end

    ListNode *toDelete = current->next;
    current->next = current->next->next;
    delete toDelete;

    return head;
}

// Function toprint the linked list
void printList(ListNode *head)
{
    while (head)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    // create two sorted Linked List
    // l1: 1->->2->3->4->5
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    int n = 2;
    head = removeNthFromEnd(head, n);
    // print the merged list

    printList(head);

    return 0;
}
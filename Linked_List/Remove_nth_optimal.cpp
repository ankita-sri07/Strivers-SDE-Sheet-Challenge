#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* removeNthFromEnd(ListNode *head, int n)
{
    ListNode *start = new ListNode(0);
    start->next = head;
    ListNode *fast = start;
    ListNode *slow = start;

    for (int i = 1; i <= n; ++i)
    {
        fast = fast->next;
    }
    while (fast->next != NULL)
    {
        fast = fast->next;
        slow = slow->next;
    }
    slow->next = slow->next->next;

    return start->next;
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
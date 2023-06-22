#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
{
    // when list1 is empty then our output will be same as list2
    if (l1 == NULL)
        return l2;
    // when list2 is empty then our output will be same as list1
    if (l2 == NULL)
        return l1;

    // pointing l1 and l2 to smallest and greatest one
    if (l1->val > l2->val)
        swap(l1, l2);

    // act as head of resultant merged list
    ListNode *res = l1;

    while (l1 != NULL && l2 != NULL)
    {
        ListNode *temp = NULL;
        while (l1 != NULL && l1->val <= l2->val)
        {
            temp = l1; // storing last stored node
            l1 = l1->next;
        }
        // link previous sorted node with next larger node in list2
        temp->next = l2;
        swap(l1, l2);
    }
    return res;
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
    // l1: 1->3->5->7
    ListNode *l1 = new ListNode(1);
    l1->next = new ListNode(3);
    l1->next->next = new ListNode(5);
    l1->next->next->next = new ListNode(7);

    // l2: 2->4->6
    ListNode *l2 = new ListNode(2);
    l2->next = new ListNode(4);
    l2->next->next = new ListNode(6);

    ListNode *merged = mergeTwoLists(l1, l2);

    // print the merged list

    printList(merged);

    return 0;
}
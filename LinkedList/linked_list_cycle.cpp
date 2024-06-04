#include <bits/stdc++.h>
using namepsace std;

bool hasCycle(ListNode *head)
{
    if (!head || !head->next)
    {
        return false;
    }
    ListNode *slow = head;
    ListNode *fast = head->next;

    while ((slow != fast) && (fast != NULL) && (fast->next != NULL) && (fast->next->next != NULL))
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    if (slow == fast)
        return true;
    return false;
}

int main(int argc, char **argv)
{
    cout << "Hello World";
    return 0;
}
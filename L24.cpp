#include <bits/stdc++.h>
#include "structs.h"

using namespace std;

ListNode *swapPairs(ListNode *head)
{
    if(head == nullptr ||head->next == nullptr) return head;
    ListNode *head2 = head->next;
    ListNode *prev = head;
    ListNode *prev2 = nullptr;
    head = head->next;
    while (head2)
    {
        // cout << "head2->val: " << head2->val << " \n";
        prev->next = head2->next;
        head2->next = prev;
        if(prev2)
            prev2->next = head2;
        prev2 = prev;
        prev = prev->next;
        if (prev){
            if(prev->next == nullptr)
                break;
            head2 = prev->next;

        }
        else
            break;
    }

    return head;
}
int main()
{
    ListNode *root = new ListNode();
    ListNode *head = root;
    string n;
    int check = 0;
    int temp;
    getline(cin, n);
    stringstream ss(n);
    while (ss >> temp)
    {
        if (check == 0)
        {
            root->val = temp;
            check = 1;
        }
        else
        {
            ListNode *add = new ListNode();
            add->val = temp;
            root->next = add;
            root = root->next;
            // cout << temp << "\n";
        }
    }

    head = swapPairs(head);

    while(head){
        cout << head->val << " ";
        head = head->next;
    };
    cout << "\n";

    return EXIT_SUCCESS;
}
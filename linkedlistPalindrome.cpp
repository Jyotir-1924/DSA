#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverse(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return head;
        ListNode* temp = head;
        ListNode* last = NULL;
        while (temp) {
            ListNode* front = temp->next;
            temp->next = last;
            last = temp;
            temp = front;
        }
        head = last;
        return head;
    }

    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* newHead = reverse(slow->next);

        ListNode* temp1 = head;
        ListNode* temp2 = newHead;
        while (temp2) {
            if (temp1->val != temp2->val) {
                reverse(newHead);
                return false;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        reverse(newHead);
        return true;
    }
};
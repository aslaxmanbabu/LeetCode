/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int gcd(int num1, int num2) {
        if (num1 < num2) {
            return num1 == 0 ? num2 : gcd(num1, num2 % num1);
        }

        return num2 == 0 ? num1 : gcd(num2, num1 % num2);
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {

        if(!head || !head->next) {
            return head;
        }

        ListNode* back = head;
        ListNode* front = back->next;

        while(back && front) {
            ListNode * temp = new ListNode(gcd(back->val, front->val));
            temp->next = front;
            back->next = temp;
            back = front;
            front = back->next;
        }
        
        return head;
        
    }
};
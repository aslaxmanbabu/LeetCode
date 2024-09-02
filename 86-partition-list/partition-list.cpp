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
    void display(ListNode *node) {
        while (node) {
            cout<<node->val<<" ";
            node = node->next;
        }
        cout<<endl;
    }
    ListNode* partition(ListNode* head, int x) {
        ListNode* curr = head;
        ListNode* prev = new ListNode;
        ListNode* temp = new ListNode;
        ListNode* b = new ListNode;
        if (!curr || !curr->next) {
            return curr;
        }
        int bound = curr->val;
        if (bound >= x) {
            prev = NULL;
        }
        else {
            while (curr->next != NULL && curr->val < x) {
                prev = curr;
                curr = curr->next;
            }
        }
        cout<<"Test: "<<curr->val<<endl;
        if (curr->next == NULL) {
            return head;
        }
        b = curr;
        while (curr->next != NULL) {
            cout<<curr->val<<endl;
            if(curr->next->val < x) {
                if (prev == NULL) {
                    prev = curr->next;
                    curr->next = curr->next->next;
                    prev->next = b;
                    head = prev;
                    cout<<"Test1: "<<prev->val<<endl;
                    cout<<"Test2: "<<curr->val<<endl;
                }
                else {
                    
                    temp = curr->next;
                    curr->next = curr->next->next;
                    prev->next = temp;
                    temp->next = b;
                    cout<<"Prev: "<<prev->val<<endl;
                    cout<<"Temp: "<<temp->val<<endl;
                    cout<<"Curr: "<<curr->val<<endl;
                    cout<<"B: "<<b->val<<endl;
                    prev = prev->next;
                    
                    // cout<<"Next: "<<curr->next->val<<endl;
                }
                if (curr->next == NULL) {
                    cout<<"Pr: "<<prev->val<<" "<<curr->val<<endl;
                    break;
                }
            }
            else {
                curr = curr->next;
            }
            display(head);
        }

        return head;
        
    }
};
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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> result;
        ListNode* dummy = new ListNode;
        dummy = head;
        int len = 0;
        int x = k;
        while(dummy != NULL) {
            len++;
            dummy = dummy->next;
        }
        if(len > 0) {
            dummy = head;
            int remainder = len % k;
            int quo = len / k;
            len = k;
            while(k--) {
                ListNode* curr = new ListNode;
                ListNode* temp = curr;
                for(int i=0; i<quo; i++) {
                    temp->next = dummy;
                    temp = temp->next;
                    if(dummy->next == NULL) {
                        temp->next = NULL;
                        result.push_back(curr->next);
                        return result;
                    }
                    dummy = dummy->next;
                }
                if(remainder>0) {
                    temp->next = dummy;
                    temp = temp->next;
                    if(dummy->next == NULL) {
                        temp->next = NULL;
                        result.push_back(curr->next);
                        break;
                    }
                    dummy = dummy->next;
                    remainder--;
                }
                temp->next = NULL;
                result.push_back(curr->next);
            }
        }

        if (result.size() < x) {
            for(int i=result.size(); i<x; i++) {
                ListNode* temp = NULL;
                result.push_back(temp);
            }
            
        }
        return result;
    }
};
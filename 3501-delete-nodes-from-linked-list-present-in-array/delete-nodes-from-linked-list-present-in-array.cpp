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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        ListNode *dummy = new ListNode;
        ListNode *temp = dummy;
        ListNode *curr = head;
        map<int, bool> r;
        for(int i=0; i<nums.size(); i++) {
            r[nums[i]] = true;
        }

        while (curr != NULL) {
            if(!r[curr->val]) {
                temp->next = curr;
                temp = temp->next;
            } 
            curr = curr->next;
        }
        temp->next = NULL;

        return dummy->next;
    }
};
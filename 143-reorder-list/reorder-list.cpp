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
    void reorderList(ListNode* head) {
        vector<ListNode*> values;
        ListNode* temp = head;

        while(temp != NULL)
        {
            values.push_back(temp);
            temp = temp->next;
        }

        int i = 0;
        int j = values.size() - 1;

        while(i < j) {
            ListNode* tmp = values[i+1];
            values[i]->next = values[j];
        
            if(i + 1 != j)
            {
                values[j]->next = tmp;
            }
            else
            {
                values[j]->next = NULL;
            }
            i++;
            j--;
        }   
        values[i]->next = NULL;
    }
};
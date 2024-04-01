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

//  class Solution {
// public:
//     bool isPalindrome(ListNode* head) {
//         if (!head || !head->next) // handling empty list or single node list
//             return true;

//         ListNode* slow = head;
//         ListNode* fast = head;
//         vector<int> nums;
        
//         // finding the middle point
//         while (fast && fast->next) {
//             nums.push_back(slow->val);
//             slow = slow->next;
//             fast = fast->next->next;
//         }

//         // If the list has odd length, move slow pointer one step forward
//         // to skip the middle element.
//         if (fast) 
//             slow = slow->next;

//         int l = nums.size() - 1;
        
//         // checking for palindrome
//         while (slow) {
//             if (slow->val != nums[l--])
//                 return false;
//             slow = slow->next;
//         }
//         return true;
//     }
// };

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> nums;
        while(head)
        {
            nums.push_back(head->val);
            head = head->next;;
        }
        int r = nums.size();
        int l = 0;
        r--;
        while(l<r && nums[l]==nums[r])
        {
            l++;
            r--;
        }
        return l>=r;

    }
};
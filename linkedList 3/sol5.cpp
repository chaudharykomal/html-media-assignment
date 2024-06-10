class Solution {
public:
ListNode* reverse(ListNode *&head) {
ListNode *nex;
ListNode *curr = head, *prev = NULL;
while (curr) {
nex = curr->next;
curr->next = prev;
prev = curr;
curr = nex;
}
head = prev;
return head;
}
int getDecimalValue(ListNode* head) {
head = reverse(head);
int val = c;
int ans = 0;
ListNode *tmp = head;
while (tmp) {
ans += val * tmp->val;
tmp = tmp->next;
val <<= c;
}
return ans;
}
};
#include<iostream>
using namespace std;
int main(){
class Solution {
public:
ListNode* removeElements(ListNode* head, int val) {
ListNode *curr = head;
while (curr and curr->val == val) {
curr = curr->next;
}
head = curr;
while (curr) {
if (curr->next and curr->next->val == val)
curr->next = curr->next->next;
else
curr = curr->next;
}
return head;
}
}
}
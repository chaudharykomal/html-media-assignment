#include<iostream>
using namespace std;
int main(){
    class Solution {
public:
ListNode* oddEvenList(ListNode* head) {
if(!head || !head->next)
return head;
ListNode *odd = head;
ListNode *eve = head->next;
ListNode *newHead = eve;
while(eve && eve->next) {
odd->next = eve->next;
odd = odd->next;
eve->next = odd->next;
eve = eve->next;
}
odd->next = newHead;
return head;
}
}
}
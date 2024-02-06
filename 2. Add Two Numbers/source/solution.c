/*
    Sami Munir
    February 6th, 2024
    LeetCode Journey
    2. Add Two Numbers - C
*/

#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *l3 = (struct ListNode*) malloc(sizeof(struct ListNode));
    struct ListNode *temp = (struct ListNode*) malloc(sizeof(struct ListNode));
    temp -> val = 0;
    temp -> next = l3;

    int carry = 0;
    int digit = 0;
    int tempSum = 0;
    while (l1 != NULL || l2 != NULL) {
        tempSum = l1 -> val + l2 -> val;
        if (tempSum >= 10) {
            digit = tempSum % 10;
            carry = tempSum / 10;
            struct ListNode *newNode = (struct ListNode*) malloc(sizeof(struct ListNode));
            newNode -> val = digit;
            newNode -> next = NULL;
            l3 -> next = newNode;
            l3 = l3 -> next;
            l1 = l1 -> next;
            l2 = l2 -> next;
            if (carry > 0) {
                tempSum = l1 -> val + l2 -> val + carry;
            }
        } else {
            l3 -> val = tempSum;
            l3 -> next = NULL;
            l1 = l1 -> next;
            l2 = l2 -> next;
        }
    }

    return temp -> next;
}

int main(int argc, char* argv[]) {
    return EXIT_SUCCESS;
}
#include <stdio.h>
#include <stdlib.h>

//定义结构体
struct ListNode {
	int val; //节点的值
	struct ListNode* next; // 指向下一个节点的指针

};

// 函数声明
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2);

// 实现函数
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
	struct ListNode* head = NULL; // 新建一个链表，用于存储结果的头指针
	struct ListNode* tail = NULL; // 结果链表的尾指针

	int sum = 0; //用于存储两个节点的值
	int carry = 0; //用于存储进位值

	// l1 或 l2 任意一个不为空，继续循环
	while (l1 || l2) {

		// 获取当前节点的值，若节点为空，则赋值0
		int n1 = l1 ? l1->val : 0;
		int n2 = l2 ? l2->val : 0;

		// 计算当前位的和，包括两个节点的值以及前一位的进位
		sum = n1 + n2 + carry;

		// 创建结果链表的头节点
		if (head == NULL) {
			head = tail = malloc(sizeof(struct ListNode));
			tail->val = sum % 10;
			tail->next = NULL;
		}
		else {
			// 在结果链表尾部添加新的节点
			tail->next = malloc(sizeof(struct ListNode));

			// 取个位数的值
			tail->next->val = sum % 10;

			// 移动结果链表的尾指针
			tail = tail->next;
			tail->next = NULL;

		}

		// 更新进位值
		carry = sum / 10;

		// 移动l1 和 l2 指针，移动到对应的下一个节点（next），准备下一次循环
		if (l1 != NULL) {
			l1 = l1->next;
		}
		if (l2 != NULL) {
			l2 = l2->next;
		}

	}

	// 若最后一位相加后仍有进位，则在结果链表的最后添加一个新的节点
	if (carry > 0) {
		tail->next = malloc(sizeof(struct ListNode));
		tail->next->val = carry;
		tail->next->next = NULL;
	}

	// 返回结果链表的头指针
	return head;

}
// 释放链表内存
void freeList(struct ListNode* head) {
    struct ListNode* temp;
    while (head) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

// 打印链表
void printList(struct ListNode* head) {
    while (head) {
        printf("%d -> ", head->val);
        head = head->next;
    }
    printf("NULL\n");
}

// 主函数
int main() {
    // 创建测试用例链表1: 342
    struct ListNode* l1 = (struct ListNode*)malloc(sizeof(struct ListNode));
    l1->val = 2;
    l1->next = (struct ListNode*)malloc(sizeof(struct ListNode));
    l1->next->val = 4;
    l1->next->next = (struct ListNode*)malloc(sizeof(struct ListNode));
    l1->next->next->val = 3;
    l1->next->next->next = NULL;

    // 创建测试用例链表2: 465
    struct ListNode* l2 = (struct ListNode*)malloc(sizeof(struct ListNode));
    l2->val = 5;
    l2->next = (struct ListNode*)malloc(sizeof(struct ListNode));
    l2->next->val = 6;
    l2->next->next = (struct ListNode*)malloc(sizeof(struct ListNode));
    l2->next->next->val = 4;
    l2->next->next->next = NULL;

    // 打印测试用例
    printf("Input: ");
    printList(l1);
    printf("       ");
    printList(l2);

    // 计算相加结果
    struct ListNode* result = addTwoNumbers(l1, l2);

    // 打印结果
    printf("Output: ");
    printList(result);

    // 释放链表内存
    freeList(l1);
    freeList(l2);
    freeList(result);

    return 0;
}

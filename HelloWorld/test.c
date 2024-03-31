#include <stdio.h>
#include <stdlib.h>

//����ṹ��
struct ListNode {
	int val; //�ڵ��ֵ
	struct ListNode* next; // ָ����һ���ڵ��ָ��

};

// ��������
struct ListNode* addTwoNumbers1(struct ListNode* l1, struct ListNode* l2);

// ʵ�ֺ���
struct ListNode* addTwoNumbers1(struct ListNode* l1, struct ListNode* l2) {
	struct ListNode* head = NULL; // �½�һ���������ڴ洢�����ͷָ��
 	struct ListNode* tail = NULL; // ��������βָ��

	int sum = 0; //���ڴ洢�����ڵ��ֵ
	int carry = 0; //���ڴ洢��λֵ

	// l1 �� l2 ����һ����Ϊ�գ�����ѭ��
	while (l1 || l2) {

		// ��ȡ��ǰ�ڵ��ֵ�����ڵ�Ϊ�գ���ֵ0
		int n1 = l1 ? l1->val : 0;
		int n2 = l2 ? l2->val : 0;

		// ���㵱ǰλ�ĺͣ����������ڵ��ֵ�Լ�ǰһλ�Ľ�λ
		sum = n1 + n2 + carry;

		// ������������ͷ�ڵ�
		if (head == NULL) {
			head = tail = malloc(sizeof(struct ListNode));
			tail->val = sum % 10;
			tail->next = NULL;
		}
		else{
			// �ڽ������β������µĽڵ�
			tail->next = malloc(sizeof(struct ListNode));

			// ȡ��λ����ֵ
			tail->next->val = sum % 10; 

			// �ƶ���������βָ��
			tail = tail->next;
			tail->next = NULL;

		}

		// ���½�λֵ
		carry = sum / 10;

		// �ƶ�l1 �� l2 ָ�룬�ƶ�����Ӧ����һ���ڵ㣨next����׼����һ��ѭ��
		if (l1 != NULL) {
			l1 = l1->next;
		}
		if (l2 != NULL) {
			l2 = l2->next;
		}

	}

	// �����һλ��Ӻ����н�λ�����ڽ�������������һ���µĽڵ�
	if (carry > 0) {
		tail->next = malloc(sizeof(struct ListNode));
		tail->next->val = carry;
		tail->next->next = NULL;
	}

	// ���ؽ�������ͷָ��
	return head;

}

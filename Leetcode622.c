#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
	typedef struct {
		int count;
		int* data;
		int head;
		int tail;
		int k;
	} MyCircularQueue;


	MyCircularQueue* myCircularQueueCreate(int k) {
		MyCircularQueue* tmp = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
		tmp->count = 0;
		tmp->data = (int*)malloc(sizeof(int) * k);
		tmp->head = 0;
		tmp->tail = 0;
		tmp->k = k;
		return tmp;
	}

	bool myCircularQueueEnQueue(MyCircularQueue * obj, int value) {
		if (obj->count == obj->k)
			return false;
		obj->data[obj->tail] = value;
		obj->tail++;
		obj->count++;
		if (obj->tail == obj->k)
			obj->tail = 0;
		return true;
	}

	bool myCircularQueueDeQueue(MyCircularQueue * obj) {
		if (obj->count == 0)
			return false;

		obj->head++;
		obj->count--;
		if (obj->head == obj->k)
			obj->head = 0;
		return true;
	}

	int myCircularQueueFront(MyCircularQueue * obj) {
		if (obj->count == 0)
			return -1;

		return obj->data[obj->head];


	}

	int myCircularQueueRear(MyCircularQueue * obj) {
		if (obj->count == 0)
			return -1;

		if (obj->tail)
			return obj->data[obj->tail - 1];
		return obj->data[obj->k - 1];

	}

	bool myCircularQueueIsEmpty(MyCircularQueue * obj) {
		if (obj->count)
			return false;
		return true;

	}

	bool myCircularQueueIsFull(MyCircularQueue * obj) {
		if (obj->count == obj->k)
			return true;
		return false;

	}

	void myCircularQueueFree(MyCircularQueue * obj) {
		free(obj->data);
		free(obj);
		obj = NULL;
	}

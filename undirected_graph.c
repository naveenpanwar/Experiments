#include<stdio.h>
#include<stdlib.h>

struct AdjListNode {
	int value;
	struct AdjListNode *next;
};

struct AdjList {
	struct AdjListNode *head;
};

struct Graph {
	int vertices;
	struct AdjList *array;
};

int main() {
	struct Graph *graph = (struct Graph *) malloc(sizeof(struct Graph));

	graph->vertices = 5;
	graph->array = (struct AdjList *) malloc( 5 * sizeof(struct AdjList));

	for(int i=0;i<5;i++) {
		graph->array[i].head = NULL;
	}

	for(int i=0;i<5;i++) {
		printf("%p\n",graph->array+i);
	}

	for(int i=0;i<5;i++) {
		printf("The head of %d is %p",i,(graph->array+i)->head);
	}
}

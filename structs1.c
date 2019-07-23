#include<stdio.h>
#include<stdlib.h>

struct node {
	int value;
	int *array;
};

int main() {
	printf("Enter the value of node\n");
	int v,l;
	scanf("%d",&v);
	printf("Enter the size of array\n");
	scanf("%d",&l);
	
	struct node* newNode = (struct node*) malloc(sizeof(struct node*));
	newNode->value = v;
	newNode->array = (int *) malloc(l*sizeof(int));
	
	printf("value of node is %d\n",newNode->value);
	for(int i=0;i<l;i++) {
		printf("Enter %d value of array\n",i);
		scanf("%d",newNode->array+i);
	}

	for(int i=0;i<l;i++) {
		printf("%d",*(newNode->array+i));
	}
}

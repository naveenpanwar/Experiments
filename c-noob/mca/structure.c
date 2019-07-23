#include<stdio.h>
#include<string.h>
#include<math.h>

void main() {
	struct Book {
		char title[50];
		char author[50];
		char subject[100];
		int year;
	};

	struct Book book1;
	strcpy(book1.title, "The White Tiger");
	strcpy(book1.author, "Arvind Adiga");
	strcpy(book1.subject, "Fantasy");
	book1.year = 2010;

	printf("%s\n",book1.title);
	printf("%s\n",book1.author);
	printf("%s\n",book1.subject);
	printf("%d\n",book1.year);

}

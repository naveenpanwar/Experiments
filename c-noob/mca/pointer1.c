#include<stdio.h>

void copy_string(char *to,char *from);

void print_array(char *a);


int main(void) {
    char s1[]="";
    char s2[]="Salahuddin";

    print_array(s1);
    print_array(s2);

    copy_string(s1,s2);

    print_array(s1);
    print_array(s2);

return 0;
}

void print_array(char *a) {
    while(*a!='\0')
        printf("%c",*a++);
    printf("\n");
}

void copy_string(char *to,char *from) {
    while(*from != '\0')
    {
        *to++=*from++;
    }
}

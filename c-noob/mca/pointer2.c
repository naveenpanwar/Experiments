#include <stdio.h>

int main()
{
    char str[1000]="Some beautiful string.", *ptr;
    int i, len;
    ptr = str;
    for(i=0;i<1000;i++){
        if(*ptr == '\0')
			break;
		else {
			ptr++;
		}
    }
    len = i;
    ptr--;
    printf("Reversed String: ");
    for(i=len; i>0; i--){
        printf("%c",*ptr--);
    }
	printf("\n");
    return 0;
}

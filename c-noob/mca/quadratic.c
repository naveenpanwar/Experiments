#include<stdio.h>
#include<math.h>

void main() {
	float a,b,c,descriminant, root1, root2, imagnary;

	printf("Enter Three numbers.\n");
	scanf("%f%f%f",&a,&b,&c);

	descriminant = (b*b) - (4*a*c);
	float sqrt_descriminent = (float)sqrt(descriminant);

	switch (descriminant > 0) {
		case 1:
			root1 = ((-b) + sqrt_descriminent) / (2*a);
			root2 = ((-b) - sqrt_descriminent) / (2*a);

			printf("Two real and distinct roots exists: %.2f and %.2f.\n",root1, root2);
			break;
		case 0:
			switch( descriminant < 0 ) {
				case 1:
					root1 = root2 = (-b) / (2*a);
					imagnary = (sqrt_descriminent) / (2*a);
					printf("Two distinct and complex roots exist: %.2f + i%.2f and %.2f + i%.2f .\n", root1,imagnary,root2,imagnary);
					break;
				case 0:
					root1 = root2 = -b / (2*a);
					printf("Two real and equal roots exist: %.2f and %.2f.\n", root1, root2);
					break;
			}
	}
}



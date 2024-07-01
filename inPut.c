/*
 * scanf function for getting a one word from the user
 * fgets function for getting a string from the user
 * %s- for strings
 * %c- for characters
 * %d- for integers
 * %p- for pointers/ memory Address
 * %f- for float
*/

#include<stdio.h>;
int main(){
	char fullName[40];
	int agE;
	char companyW[30];
	char departmenT[10];

	printf("Hello, Welcome to KCA University \a\n");
	printf("What's your fullname? ");
	fgets(fullName, sizeof(fullName), stdin);

	printf (" %s, Whats your place of work? ", fullName);
	fgets(companyW, sizeof(companyW), stdin);

	printf("%s !!! Damn, Which Department? \a\n", companyW);
	scanf("%s", &departmenT);

	printf("How old are you? ");
	scanf("%d", &agE);

	//Finally
	printf("At %d !!!, already working at %s as a %s, Your success is assured \n\a", agE, companyW, departmenT);
	printf("Keep It Up, it'll start paying soon");

	return 0;
}



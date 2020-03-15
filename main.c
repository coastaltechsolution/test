#include<stdio.h>
/*This us a huge comment
*/


int main(int argc, char *argv[])

{

int firstNumber;
int secondNumber; 
int addNumbers;

printf("Please enter first number:\n");

scanf("%d", &firstNumber);

printf("Please enter second number: \n");	

scanf("%d", &secondNumber);

addNumbers = firstNumber + secondNumber;

printf("Your 2 numbers added together are: %d \n", addNumbers);

int *pNumOne = &firstNumber;
int *pNumTwo = &secondNumber;
printf("The memory address of firstNumber is:%p\n", pNumOne);
printf("The memory address of secondNumber is:%p", pNumTwo);
printf("\n");


return 0;





}

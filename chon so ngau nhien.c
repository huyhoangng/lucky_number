#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int num1;	
	int num;
	int i;
	srand(time(0));
	num1=rand()%100+1;
	do
	{
	printf("Guess the number:\n");
	scanf ("%d",&num);
	if (num<num1)
	{
	printf("Too low!!");
	}
	else if(num>num1)
	{
	printf("Too high!!");
	}
	else{
		printf("Congratulations!!! Ban da doan dung so %d trong %d lan doan\n ",num1,i);
	}
	i++;
	}while (num !=num1);
return 0;
}


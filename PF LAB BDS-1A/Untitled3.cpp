#include<stdio.h>
int main(){
	int marks ;
	printf("Enter your marks:");
	scanf("%d",&marks);
	if(marks<0 && marks> 100)
	printf("Not a valid mark");
	else if(marks >=90 && marks<=100)
	printf("Grade is A");
	else if(marks>=80 && marks<=89)
	printf("Grade is B");
	else if (marks >=70 && marks <= 79)
	printf("Grade is C");
	else if(marks >=60 && marks <=69)
	printf("Grade is D");
	else
	printf("Grade is F");
	return 0;
}

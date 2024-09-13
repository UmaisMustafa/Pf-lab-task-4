#include<stdio.h>
int main(){
	int num1,num2;
	printf("enter values of num1 and num2:");
	scanf("%d%d",&num1,&num2);
	if(num1 > num2){
		if(num1 > num2)
		printf("First number is significantly larger");
		else
		printf("First number is less than 100");
	}
		else if(num1 < num2){
		if(num1 <0)
	printf("first number is smaller");
	else
	printf("number is not less than 0");
}
else
printf("Both numbers are equal");
	
}

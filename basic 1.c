
 #include<stdio.h>
 int main() 	
 {
 	float num1,num2,answer;
 	char o;
 	printf("enter the first number:");
 	scanf("%f",&num1);
 	printf("\nenter the operaion:(+,-.*./)");
 	scanf("%c",&o);
 	printf("\nenter the second number:");
 	scanf("%f",&num2);
 	if(o=='+')
 	{
 		answer=num1+num2;
 		printf("%f+%f=%f\n",num1,num2,answer);
	 }
	 else if(o=='-')
	 {
	 	answer=num1-num2;
	 	printf("%f-%f=%f\n",num1,num2,answer);
	 }
	 else if(o=='*')
	 {
	 answer=num1*num2;
	 printf("%f*%f = %f\n",num1,num2,answer);
    }
    else if (o=='/')
	 {
	 	if(num2!=0)
	 	{
	 		answer=num1/num2;
	 		printf("%f/%f=%f",num1,num2,answer);
		 }
		 else
		 {
		 	printf("ERROR: division by o is not allower\n");
		 }
	 }
	 else
	 {
	 	printf("ERROR : invalid operation");
	 	
	 }
	 return 0;
}

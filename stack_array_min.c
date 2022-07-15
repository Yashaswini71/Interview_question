/*
Expected output:
if stack contains:
     25         --> pop()->25    min=3
     100        --> pop()->100   min=3
     3          --> pop()->3     min=5
     10         --> pop()->10    min=5
     5          --> pop()->5     min=7
     33         --> pop()->33    min=7
     7          --> pop()->7     stack is empty
*/

#include<stdio.h>
#include<stdlib.h>

#define SIZE 10
int top = -1;
int stack[SIZE];

void push();
void pop();
void print();
void get_min();

int main()
{
	int option;
	while(1)
	{
		printf("Enter the option:\n");
		printf("1.push\n2.pop\n3.print\n4.exit\n");
		scanf("%d",&option);
		switch(option)
		{
			case 1: push();
				break;
			case 2: pop();
				break;
			case 3: print();
				break;
			case 4: exit(0);
				break;
		}
	}
	return 0;
}

void push()
{
	int data;
	printf("Enter the data:");
	scanf("%d",&data);
	if(top == SIZE -1)
	{
		printf("Stack is full\n");
	}
	else
	{
		stack[++top] = data;
	}
}

void pop()
{
	if(top == -1)
	{
		printf("Stack is empty\n");
	}
	else
	{
		printf("Deleleted element is %d\n",stack[top]);
		--top;
		if(top >= SIZE)
		{
			top = -1;
		}
	}
	get_min();
}

void print()
{
	if(top == -1)
	{
		printf("Stack is empty\n");
	}
	else
	{
		for(int i=top; i>=0; i--)
		{
			printf("%d ",stack[i]);
		}
		printf("\n");
	}
}

void get_min()
{
	if(top == -1)
	{
		printf("Stack is empty\n");
	}
	else
	{
		int index = top;
		int min = stack[index];
		while(index != -1)
		{
			if(stack[index] < min)
			{
				min = stack[index];
			}
			index--;
		}
		printf("Minimum element=%d\n",min);
	}
}

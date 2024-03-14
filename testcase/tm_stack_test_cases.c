#include<stdio.h>
#include<tm_stack.h>
int main()
{
int succ;
int x1,x2,x3,x4;
int *x;
x1=10;
x2=20;
x3=30;
x4=40;
Stack *stack;
stack=createStack(&succ);
if(succ==false)
{
printf("Unable to create stack\n");
return 0;
}

pushOnStack(stack,&x1,&succ);
if(succ==false) printf("Unable to push data on stack\n");

pushOnStack(stack,&x2,&succ);
if(succ==false) printf("Unable to push data on stack\n");

pushOnStack(stack,&x3,&succ);
if(succ==false) printf("Unable to push data on stack\n");

pushOnStack(stack,&x4,&succ);
if(succ==false) printf("Unable to push data on stack\n");

if(isStackEmpty(stack)) printf("Stack is empty\n");
else printf("Stack is not empty\n");
printf("Size of stack: %d\n",getSizeOfStack(stack));

x=(int *)elementAtTopOfStack(stack,&succ);
printf("Element at top of stack: %d\n",*x);

while(!isStackEmpty(stack))
{
printf("%d\n",popFromStack(stack,&succ));
}
destroyStack(stack);
return 0;
}
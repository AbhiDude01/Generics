#include<stdio.h>
#include<tm_queue.h>
int main()
{
int succ;
int x1,x2,x3,x4;
int *x;
x1=10;
x2=20;
x3=30;
x4=40;
Queue *queue;
queue=createQueue(&succ);
if(succ==false)
{
printf("Unable to create queue\n");
return 0;
}

addToQueue(queue,&x1,&succ);
if(succ==false) printf("Unable to push data on queue\n");

addToQueue(queue,&x2,&succ);
if(succ==false) printf("Unable to push data on queue\n");

addToQueue(queue,&x3,&succ);
if(succ==false) printf("Unable to push data on queue\n");

addToQueue(queue,&x4,&succ);
if(succ==false) printf("Unable to push data on queue\n");

if(isQueueEmpty(queue)) printf("Queue is empty\n");
else printf("Queue is not empty\n");
printf("Size of queue: %d\n",getSizeOfQueue(queue));

x=(int *)elementAtTopOfQueue(queue,&succ);
printf("Element at top of queue: %d\n",*x);

while(!isQueueEmpty(queue))
{
x=(int *)removeFromQueue(queue,&succ);
printf("%d\n",*x);
}
destroyQueue(queue);
return 0;
}
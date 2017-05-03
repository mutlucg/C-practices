/*Mutlu Can Gürbüz, S004451*/

#include "queue.h"
#include <stdio.h>

void init_queue(queue *q)
{
        q->first = 0;
        q->last = QUEUESIZE-1;
        q->count = 0;
}

void enqueue(queue *q, int x)
{
        if (q->count >= QUEUESIZE)
		printf("Warning: queue overflow enqueue x=%d\n",x);
        else {
                q->last = (q->last+1) % QUEUESIZE;
                q->q[q->last] = x;
                q->count = q->count + 1;
        }
}
int dequeue(queue *q)
{
        int x;
        if (q->count <= 0) 
		printf("Warning: empty queue dequeue.\n");
        else {
                x = q->q[ q->first ];
                q->first = (q->first+1) % QUEUESIZE;
                q->count = q->count - 1;
        }
        return(x);
}
void print_queue(queue *q){
	int i;
	for (i = 0; i < q->count; i++){	
            if(i!=q->count-1){
		printf("%d, ", q->q[i]);
            }else printf("%d\n", q->q[i]);
		
	}
}



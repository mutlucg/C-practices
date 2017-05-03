/*Mutlu Can Gürbüz, S004451*/

#ifndef ADD_H
#define ADD_H

#define QUEUESIZE 1000

typedef struct {
        int q[QUEUESIZE];    /* body of queue */
        int first;           /* position of first element */
        int last;            /* position of last element */
        int count;           /* number of queue elements */
}queue;

void init_queue(queue *q);
void enqueue(queue *q, int x);
int dequeue(queue *q);
void print_queue(queue *q);

#endif
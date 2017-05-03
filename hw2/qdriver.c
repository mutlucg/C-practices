/*Mutlu Can Gürbüz, S004451*/

#include "queue.h"
//changeForConvenience
#include <stdio.h>

int main(){
	queue q;
	init_queue(&q);
	for(int i=0;i<QUEUESIZE;i++){
		enqueue(&q,i);
	}
	print_queue(&q);
	
	for(int i=0;i<QUEUESIZE;i++){
		dequeue(&q);
	}
	print_queue(&q);
	
	return 0;
}
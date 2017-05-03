#Mutlu Can Gürbüz, S004451
#!/bin/bash

clear

default="#define QUEUESIZE 1000"
changeFrom="#define QUEUESIZE "
LIMIT=20

sed -i 's|//changeForConvenience|#include "queue.c"|g' qdriver.c
for (( i=5; i<=LIMIT; i*=2 ))
	do
		echo "$i:" >> qdriver.log
		changeTo=$changeFrom
		changeTo=$changeFrom$i
		sed -i "s/.*$changeFrom.*/$changeTo/g" queue.h 
		gcc qdriver.c -o qdriver
		./qdriver | tee tmp.log
		cat tmp.log >> qdriver.log
	done
rm tmp.log
sed -i 's|#include "queue.c"|//changeForConvenience|g' qdriver.c
sed -i "s/.*$changeFrom.*/$default/g" queue.h

~
~
~
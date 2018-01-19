truncate: truncate.o
	gcc truncate.o -o truncate
	
truncate.o: truncate.c
	gcc truncate.c -c
	
clean:
	rm -i *.c~ *.o  truncate
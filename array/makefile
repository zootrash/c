objects = array.o

watevz : $(objects)
	gcc -Wall -o array $(objects)

%.o : %.c
	gcc -Wall -c -g $<

clean :
	rm -f array 
	rm -f $(objects)

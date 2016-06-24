objects = warmuptest.o tokenizer.o

warmup : $(objects)
	gcc -Wall -o warmuptest $(objects)

%.o : %.c
	gcc -Wall -c -g $<

clean :
	rm -f warmuptest
	rm -f $(objects)


# notes
# -g : enables debug info
#			 increases size of .o files
#			 dev/production phase
#
# -c : compile end
#			 no linker
#			 'all I want is the .o files'
#
# -Wall : turn on all warnings
#
# -> warmup can be named to anything
# -> warmuptest is the name of the exec.
# -> objects = obj. files; .o files

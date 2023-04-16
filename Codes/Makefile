.SUFFIXES: .c .cpp .o .ex

# the compiler: gcc for C program, define as g++ for C++
    # compiler flags:
  #  -g    adds debugging information to the executable file
  #  -Wall turns on most, but not all, compiler warnings
  CC = g++ -g -Wall 


  # to include external libraries to your code
LIBS =
INCLUDE  = -I/./



.cpp.o:
	$(CC) $(INCLUDE) -c $< 

.c.o:
	gcc $(INCLUDE) -c $< 

.o.ex:
	@echo g++ ... -o $@ $< ... $(OBJS) ... $(LIBS) 
	@$(CC) -o $@ $< $(OBJS) $(LIBS)

######################################################################
# targets
######################################################################
OBJS  = 

objs: $(OBJS)

clean:
	rm -f *.o *.ex *~
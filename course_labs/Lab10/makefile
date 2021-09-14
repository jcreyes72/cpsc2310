OBJS	= driver.o functions.o
SOURCE	= driver.c functions.c
HEADER	= functions.h
OUT	= a.out
CC	 = gcc
FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

driver.o: driver.c
	$(CC) $(FLAGS) driver.c 

functions.o: functions.c
	$(CC) $(FLAGS) functions.c 


clean:
	rm -f $(OBJS) $(OUT)

run: $(OUT)
	./$(OUT)

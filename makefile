CC = gcc
CFLAGS = -Wall -g
OBJS = phoneBookMain.o print.o delete.o register.o search.o
TARGET = HW6.out

$(TARGET): $(OBJS)
	$(CC) -o $@ $(OBJS)

phoneBookMain.o: phone.h phoneBookMain.c
delete.o: phone.h delete.c
print.o: phone.h print.c
register.o: phone.h register.c
search.o: phone.h search.c

clean:
	rm -rf *.o $(TARGET)

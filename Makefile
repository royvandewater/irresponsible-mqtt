OBJS = MQTT.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

build: MQTT.o

test: build
	mkdir -p .build
	$(CC) $(LFLAGS) spec/run_all.cpp $(OBJS) -lcppunit -o .build/run_all
	./.build/run_all

clean:
	rm -f *.o
	rm -rf .build

MQTT.o: MQTT.cpp MQTT.h
	$(CC) $(CFLAGS) MQTT.cpp

all: build test

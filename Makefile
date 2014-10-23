build:
	g++ -Wall -c MQTT.cpp

test:
	cd spec && make test

all: build upload

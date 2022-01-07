.PHONY: build run

build: configure
	cmake --build build

configure:
	cmake -B build

run:
	./build/bin

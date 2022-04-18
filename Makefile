.PHONY: build run

build: configure
	cmake --build build

configure:
	cmake -B build -GNinja

run:
	./build/bin

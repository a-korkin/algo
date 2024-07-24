all: build run
build:
	mkdir -p target
	gcc src/*.c -o target/main

run:
	target/main
clean:
	rm -rf target/main


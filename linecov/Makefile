

main: main.c
	gcc -o main main.c -fprofile-arcs -ftest-coverage

.PHONY: clean lcov

clean:
	-rm -rf main main.gcda main.gcno lcov

main.gcda: main

main.gcno: main.gcda main
	./main

lcov: main main.gcda main.gcno
	mkdir -p lcov
	lcov -t "HelloWorld" -o lcov/info -c -d .
	genhtml -o lcov lcov/info

pi: integral.o main.o
		gcc -Wall -g $^ -o $@

integral.o:integral.c
		gcc -Wall -c -g $< -o $@

main.o:main.c
		gcc -Wall -c -g $< -o $@
clean:
		rm -f pi *.o
all: 0101 0102
0101: 0101.c
	gcc -o build/0101 0101.c -I.
0102: 0102.c
	gcc -o build/0102 0102.c -I.

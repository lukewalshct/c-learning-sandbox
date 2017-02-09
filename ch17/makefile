sort_words: sort_words.o read_line.o
	gcc -o sort_words sort_words.o read_line.o
sort_words.o: sort_words.c read_line.h read_line.o
	gcc -c sort_words.c read_line.o
read_line.o: read_line.c read_line.h
	gcc -c read_line.c

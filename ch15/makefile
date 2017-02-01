
long_date: long_date.o
	gcc -o long_date long_date.o date_parser.o
long_date.o: long_date.c date_parser.o common_macros.h date_parser.h
	gcc -c long_date.c date_parser.o
date_parser.o: date_parser.c date_parser.h common_macros.h
	gcc -c date_parser.c 
	

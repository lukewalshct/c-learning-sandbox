country_lookup: country_lookup.o read_int.o
	gcc -o country_lookup country_lookup.o read_int.o
country_lookup.o: country_lookup.c read_int.o read_int.h
	gcc -c country_lookup.c read_int.o
read_int.o: read_int.c read_int.h
	gcc -c read_int.c

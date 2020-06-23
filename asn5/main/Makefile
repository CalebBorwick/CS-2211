
export: main

main: main.o bstreeDir datatypeDir matrixDir
	gcc -o main main.o ../bstree/bstree.o ../datatype/datatype.o ../matrix/matrix.o

main.o: main.c ../include/*.h
	gcc -I../include -c main.c
bstreeDir:
	(cd ../bstree; make export)
datatypeDir:
	(cd ../datatype; make export)
matrixDir:
	(cd ../matrix; make export)
print:
	lpr main.c
printall:
	lpr main.c
	(cd ../bstree; make print)
	(cd ../datatype; make print)
	(cd ../matrix; make print)
clean:
	rm -f *.o main core
cleanall:
	rm -f *.o main core
	(cd ../bstree; make clean)
	(cd ../datatype; make clean)
	(cd ../matrix; make clean)

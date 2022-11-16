outfile:main.o add.o delete.o print.o  mix.o
	cc main.o add.o delete.o  print.o mix.o -o student
main.o:main.c
	cc -c main.c
print.o:print.c
	cc -c print.c
add.o:add.c
	cc -c add.c
delete.o:delete.c
	cc -c delete.c

mix.o:mix.c
	cc -c mix.c
clear:
	@echo "clearing..." # echo-for printing ( if no @ then print echo too ) 
	@rm *.o

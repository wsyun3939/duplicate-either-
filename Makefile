CFLAGS=-O3 -Wall -g
duplicate-either-:heuristics.o main.o print.o problem.o solution.o solve.o
heuristics.o:define.h heuristics.h print.h problem.h solution.h
main.o:define.h print.h problem.h solution.h solve.h
print.o:define.h print.h problem.h solution.h
problem.o:define.h problem.h
solution.o:solution.h define.h
solve.o:solve.h define.h heuristics.h print.h problem.h solution.h 
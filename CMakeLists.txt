cmake_minimum_required(VERSION 3.20)
project(L3 C)

set(CMAKE_C_STANDARD 99)
set(INCLUDES TP1/ex1/ex1.h TP1/ex2/ex2.h TP1/ex3/ex3.h TP1/ex4/ex4.h TP1/ex5/ex5.h TP1/ex6/ex6.h TP2/ex1/ex1.h TP2/ex1/ex1.h TP2/ex2/ex2.h TP2/ex3/ex3.h TP2/ex4/ex4.h TP2/ex5/ex5.h TP2/ex6/ex6.h TP2/ex7/ex7.h TP2/ex8/ex8.h TP2/ex9/ex9.h TP2/ex10/ex10.h TP2/ex11/ex11.h TP2/ex12/ex12.h TP3/ex1/ex1.h TP3/ex2/ex2.h TP3/ex3/ex3.h TP3/ex4/ex4.h TP3/ex5/ex5.h TP3/ex6/ex6.h TP3/ex7/ex7.h TP3/ex8/ex8.h TP3/ex9/ex9.h TP3/ex10/ex10.h TP3/ex11/ex11.h TP3/ex12/ex12.h TP4/ex1/ex1.h TP4/ex2/ex2.h TP4/ex3/ex3.h TP4/ex4/ex4.h TP4/ex5/ex5.h TP4/ex6/ex6.h TP5/ex1/ex1.h TP5/ex2/ex2.h TP5/ex3/ex3.h TP5/ex4/ex4.h TP5/ex5/ex5.h TP5/ex6/ex6.h TP6/ex1/ex1.h)
set(SOURCES TP1/ex1/ex1.c TP1/ex2/ex2.c TP1/ex3/ex3.c TP1/ex4/ex4.c TP1/ex5/ex5.c TP1/ex6/ex6.c TP2/ex1/ex1.c TP2/ex1/ex1.c TP2/ex2/ex2.c TP2/ex3/ex3.c TP2/ex4/ex4.c TP2/ex5/ex5.c TP2/ex6/ex6.c TP2/ex7/ex7.c TP2/ex8/ex8.c TP2/ex9/ex9.c TP2/ex10/ex10.c TP2/ex11/ex11.c TP2/ex12/ex12.c TP3/ex1/ex1.c TP3/ex2/ex2.c TP3/ex3/ex3.c TP3/ex4/ex4.c TP3/ex5/ex5.c TP3/ex6/ex6.c TP3/ex7/ex7.c TP3/ex8/ex8.c TP3/ex9/ex9.c TP3/ex10/ex10.c TP3/ex11/ex11.c TP3/ex12/ex12.c TP4/ex1/ex1.c TP4/ex2/ex2.c TP4/ex3/ex3.c TP4/ex4/ex4.c TP4/ex5/ex5.c TP4/ex6/ex6.c TP5/ex1/ex1.c TP5/ex2/ex2.c TP5/ex3/ex3.c TP5/ex4/ex4.c TP5/ex5/ex5.c TP5/ex6/ex6.c TP6/ex1/ex1.c)

add_executable(L3 main.c ${SOURCES} ${INCLUDES})

target_link_libraries(L3 m)

cmake_minimum_required(VERSION 3.20)
project(L3 C)

set(CMAKE_C_STANDARD 99)
set(INCLUDES TP1/ex1/ex1.h TP1/ex2/ex2.h TP1/ex3/ex3.h TP1/ex4/ex4.h TP1/ex5/ex5.h TP1/ex6/ex6.h TP1/ex7/ex7.h)
set(SOURCES TP1/ex1/ex1.c TP1/ex2/ex2.c TP1/ex3/ex3.c TP1/ex4/ex4.c TP1/ex5/ex5.c TP1/ex6/ex6.c TP1/ex7/ex7.c)

add_executable(L3 main.c ${SOURCES} ${INCLUDES})

target_link_libraries(L3 m)

cmake_minimum_required(VERSION 3.19)
project(student_oop C)

set(CMAKE_C_STANDARD 99)

add_executable(student_oop main.c Student/student.c Student/student.h)
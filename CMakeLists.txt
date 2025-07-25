cmake_minimum_required(VERSION 3.28)
project(xin)

set(CMAKE_CXX_STANDARD 11)

add_executable(xin main.cpp
        Leetcode/interview_75/solution_75.cpp
        Leetcode/interview_75/solution_75.h
        Leetcode/suixianglu/solution_suixianglu.cpp
        Leetcode/suixianglu/solution_suixianglu.h)

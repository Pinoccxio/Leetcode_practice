cmake_minimum_required(VERSION 3.28)
project(xin)

set(CMAKE_CXX_STANDARD 11)

add_executable(xin main.cpp
        Leetcode/interview_75/interview_75.cpp
        Leetcode/interview_75/interview_75.h
        Leetcode/suixianglu/suixianglu.cpp
        Leetcode/suixianglu/suixianglu.h)

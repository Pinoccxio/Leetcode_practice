cmake_minimum_required(VERSION 3.16)
project(xin)

set(CMAKE_CXX_STANDARD 11)

add_executable(xin main.cpp
        Leetcode/interview_75/interview_75.cpp
        Leetcode/interview_75/interview_75.h
        Leetcode/suixianglu/array.cpp
        Leetcode/suixianglu/array.h
        Leetcode/suixianglu/myLinkedList.cpp
        Leetcode/suixianglu/myLinkedList.h
        Leetcode/suixianglu/hashTable.cpp
        Leetcode/suixianglu/hashTable.h
        Leetcode/suixianglu/string_cx.cpp
        Leetcode/suixianglu/string_cx.h
        Leetcode/suixianglu/stack_queue.cpp
        Leetcode/suixianglu/stack_queue.h
        Leetcode/suixianglu/binaryTree.cpp
        Leetcode/suixianglu/binaryTree.h
)

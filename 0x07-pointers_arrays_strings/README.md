# 0x07. C - Even more pointers, arrays, and strings

## Project Overview

This project focuses on the concepts of memory manipulation using pointers and arrays in the C programming language. It introduces the use of functions that deal with buffers and memory areas, exploring their importance in systems programming. 

The tasks in this project will help in mastering the use of pointers, memory addresses, and memory management, which are critical skills for low-level programming.

## Task 0 - _memset function

In this task, we implement a function called `_memset` that fills a block of memory with a specific value. The function is intended to mimic the behavior of the standard library function `memset`.

### Prototype:
```c
char *_memset(char *s, char b, unsigned int n);

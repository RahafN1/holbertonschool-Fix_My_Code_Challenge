# 0x00 - Fix My Code Challenge

## FizzBuzz

A Python implementation of the classic FizzBuzz problem.

### Description

The script `0-fizzbuzz.py` prints the numbers from 1 to `n`, separated by a space:

- For multiples of 3, it prints `Fizz` instead of the number.
- For multiples of 5, it prints `Buzz` instead of the number.
- For multiples of both 3 and 5, it prints `FizzBuzz`.

### The bug that was fixed

The `FizzBuzz` condition (multiple of 3 **and** 5) was checked after the `Fizz` condition, so it was never reached. Numbers like 15 printed `Fizz` instead of `FizzBuzz`. The fix was to check the combined condition first.

### Usage

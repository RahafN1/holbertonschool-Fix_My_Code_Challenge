# Fix My Code Challenge

`Fix my code` is a project where we jump into an existing code base and fix it, without recoding everything.

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All files are tested on Ubuntu 20.04 LTS
- All files end with a new line
- A `README.md` file at the root of the project folder is mandatory
- Scripts must be executable (`chmod +x <file>`)

## Tasks

### 0. FizzBuzz

- File: `0-fizzbuzz.py` (Python 3)
- Prints the numbers from 1 to `n`, separated by a space:
  - multiples of 3 print `Fizz`
  - multiples of 5 print `Buzz`
  - multiples of both 3 and 5 print `FizzBuzz`
- **Bug fixed:** the combined `FizzBuzz` condition was checked after the `Fizz` condition, so it was never reached. It is now checked first.

```
$ ./0-fizzbuzz.py 15
1 2 Fizz 4 Buzz Fizz 7 8 Fizz Buzz 11 Fizz 13 14 FizzBuzz
```

### 1. Print square

- File: `1-print_square.js` (JavaScript, Node.js)
- Prints a square of the given size using the character `#`.
- **Bug fixed:** the size was parsed in base 16, so `10` printed a square of size 16. It is now parsed in base 10 with `parseInt(process.argv[2], 10)`.

```
$ ./1-print_square.js 4
####
####
####
####
```

### 2. Sort

- File: `2-sort.js` (or the file name given in the task)
- Sorts the given list correctly.
- **Bug fixed:** describe here the bug you found and how you fixed it.

### 3. User password

- File: `3-user_password.py` (or the file name given in the task)
- Handles user password logic.
- **Bug fixed:** describe here the bug you found and how you fixed it.

### 4. Double linked list

- File: `4-double_linked_list.c` (or the file name given in the task)
- Implementation of a doubly linked list.
- **Bug fixed:** describe here the bug you found and how you fixed it.

## Usage

Make a script executable and run it:

```
$ chmod +x 0-fizzbuzz.py
$ ./0-fizzbuzz.py 89
```

## Author
Rahaf Alabdalh

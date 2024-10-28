This project uses a `Makefile` to compile and run a C++ program and to check for memory leaks with either `valgrind` (Linux) or `leaks` (macOS).

## Requirements

- **g++**: C++ compiler
- **valgrind**: Memory analysis tool (Linux only, for `check` target)
- **leaks**: Memory leak checker (macOS only, for `check` target)

## Usage

- To compile and run the program:

  ```bash
  make all
  ```

- To check for memory leaks (LINUX):

  ```bash
  make check_valgrind
  ```

- To check for memory leaks (MacOS):

  ```bash
  make check_leaks
  ```

- To clean up compiled files:
  ```bash
  make clean
  ```

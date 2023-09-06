# FOOP - Fake OOP

FOOP, Fake OOP, is an example of utilizing OOP concepts with simple C. This is a toy project only to learn the concepts of OOP.
It demonstrates the following OOP concepts:
- Abstraction
- Encapsulation
- Inheritance
- Polymorphism

## Prerequisites
This simple example requires:
- A C compiler that supports C11. The newest [GCC](https://gcc.gnu.org/) or [Clang](https://clang.llvm.org/) will surely work.
- Make (Optional). You may check out the [GNU Make](https://www.gnu.org/software/make/#download).

## Usage
### On Unix-like Systems
In your terminal, clone this repo.

``` sh
git clone https://github.com/cygishere/foop.git
```

Enter the project directory,

``` sh
cd foop/bin
```

and run Make.

``` sh
make
```

The test should run itself.

### On Windows
Personally I would recommend you to try out an Unix-like environment. For example, to try it on Windows, you may
- dual boot Windows with a Linux distro, or
- use [WSL2](https://learn.microsoft.com/en-us/windows/wsl/install), or
- use a virtualization program, such as [VirtualBox](https://www.virtualbox.org/), or
- use other solutions such as [w64devkit](https://github.com/skeeto/w64devkit) (big fan of the project here).

If getting an Unix programming environment is not an option, you may build and run the program manually. The compile command is very simple:

``` sh
# gcc
gcc -o foop animal.c cat.c test.c
# clang
clang -o foop animal.c cat.c test.c
```


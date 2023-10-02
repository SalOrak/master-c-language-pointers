# Master C Pointers repository

This repository contains the source code for each challenge presented in the **Master C Language Pointers** LinkedIn course by Dan Gookin.  

There are a total of **4 challenges**.
Each challenge has its **directory** containg the source code.
In some cases there are multiple solutions as there are MANY ways to do the same things. 

All the solutions are memory tested using `valgrind` with the `--leak-check` flag to ensure there are no leaks.


## Challenge 1: Obtain an address

**Difficulty**: Trivial

The section is called **1.Pointer Basics**. It explains the basics of pointers, what they are and what they are used for.

The challenge is the following:

> **Obtain an Address.** 
> Write code that uses four variables `char a; char *x; int b; int *y`. 
> Output the address of variables `a` and `b` using the `%p` placeholder. 
> Initialize pointers `x` and `y` to their corresponding variables. Output the addresses stored in each pointer variable.

## Challenge 2: Saving and reading a record

**Difficulty**: Easy

> **Saving and Reading a Record**
> Create two separate programs.
> First program: create a structure, fill with data, save to a file.
> Second program: read the file, fill the structure, output the data.
> The structure is allocated as a `pointer`. Has two members: `string name` and `integer age`. Same definition for both programs.
> Prompt the user to input both members.
> Write / Read to the file `saved.dat`.

## Challenge 3: Manage a Linked List

**Difficulty**: Easy - Medium

> **Manage a Linked List**
> Being a record a structure with the following attributes: `char name[SIZE]`, `char relationship[SIZE]`, `int age` and `struct family *next`. 
>> Create the following commands:
>> Add a record to the list.
>> Delete a record from the list.
>> List all records.
>> Save the records to a data file: `family.dat`.
>> Open the data file and read in the records.
>> Quit

## Challenge 4: Manipulate a pointer array
**Difficulty**: Medium

> **Manipulate a Pointer Array**
> The idea is to send an array of pointers to a function.
> Write the function: `void get_input(char **b)` which returns no value.
> The function does the following:
>> Allocated the passed pointer's memory.
>> Read a string from standard input, to be stored at the passed pointer's address.
>> Ensure that any newline character `\n` is removed from the string.
> The main function should declare an array of five pointers, loop to send each pointer in the array to the `get_input()` function for allocation and filling. Then output the strings.


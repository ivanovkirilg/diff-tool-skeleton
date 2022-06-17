# Diff Tool Task

This is a skeleton for a group task to implement
**a utility program for comparing files**.

<br>

## Contents
  - [`main.c`](src/main.c) with an example `main()` function
    _(this kind of structure will make your life much easier later)_;
  - [`include/`](include/) with some headers suggesting modules
    that you may want to implement in `src/`;
  - [`tests/`](tests/) with sample input files & expected output,
    divided into solution stages _(more on this later)_;
  - `run_tests.py` so you don't spend more time
    in the terminal than in your editor _(usage below)_.
  - [`Makefile`](bld/Makefile) to build the project _(see below)_.

### Changing the skeleton
You are free to make any _informed_ changes to any of the provided files
or the directory structure; meaning you should understand the reasons
for the initial contents first, and only then adjust them to your needs.

### Usage of `run_tests.py`
TODO

### Building with make
TODO

----

## Solution Stages
###### _Not all diffs are created equal._
You are **strongly** encouraged to implement the program
in increasing levels of functionality and sophistication.

The `tests/` directory assumes the following suggestion:

### Stage-0
Check files for strict equality. Meaning _any_ difference
is considered a negative, and _no_ difference - a positive.
#### Suggested output:
"`Files are identical.`" or "`Files are different.`"

### Stage-1
Count the number of non-identical lines. For each line,
compare only its counterpart (so don't take added or deleted
lines into account).
#### Suggested output:
"`Files are identical.`", "`1 line differs.`", or "`15 lines differ.`"

### Stage-2


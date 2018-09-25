


## Score: 100/100 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++ -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -c  tests/catchlib.cpp -o tests/catchlib.o
clang++ -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -c  tests/unit_tests.cpp -o tests/unit_tests.o
clang++ -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -c  tests/catch_main.cpp -o tests/catch_main.o
clang++ -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -c  letter.cpp -o .objs/letter.o
clang++ -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -c  room.cpp -o .objs/room.o
clang++ -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -c  allocator.cpp -o .objs/allocator.o
clang++ -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -c  fileio.cpp -o .objs/fileio.o
clang++ tests/catchlib.o tests/unit_tests.o tests/catch_main.o .objs/letter.o .objs/room.o .objs/allocator.o .objs/fileio.o -std=c++1y -stdlib=libc++ -lpthread  -o test

```


### ✓ - [5/5] - Test the constructor (valgrind)

- **Points**: 5 / 5

```
==13474== Memcheck, a memory error detector
==13474== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13474== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==13474== Command: ./test -r xml "Test\ the\ constructor\ (valgrind)"
==13474== 
==13474== 
==13474== HEAP SUMMARY:
==13474==     in use at exit: 0 bytes in 0 blocks
==13474==   total heap usage: 2,522 allocs, 2,522 frees, 279,888 bytes allocated
==13474== 
==13474== All heap blocks were freed -- no leaks are possible
==13474== 
==13474== For counts of detected and suppressed errors, rerun with: -v
==13474== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Test the constructor (valgrind)" tags="[valgrind][weight=5]" filename="tests/unit_tests.cpp" line="17">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="0" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - Test allocate() (valgrind)

- **Points**: 5 / 5

```
==13484== Memcheck, a memory error detector
==13484== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13484== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==13484== Command: ./test -r xml "Test\ allocate()\ (valgrind)"
==13484== 
==13484== 
==13484== HEAP SUMMARY:
==13484==     in use at exit: 0 bytes in 0 blocks
==13484==   total heap usage: 2,522 allocs, 2,522 frees, 277,616 bytes allocated
==13484== 
==13484== All heap blocks were freed -- no leaks are possible
==13484== 
==13484== For counts of detected and suppressed errors, rerun with: -v
==13484== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Test allocate() (valgrind)" tags="[valgrind][weight=5]" filename="tests/unit_tests.cpp" line="24">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="0" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [20/20] - Test printRooms() (valgrind)

- **Points**: 20 / 20

```
==13494== Memcheck, a memory error detector
==13494== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13494== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==13494== Command: ./test -r xml "Test\ printRooms()\ (valgrind)"
==13494== 
==13494== 
==13494== HEAP SUMMARY:
==13494==     in use at exit: 0 bytes in 0 blocks
==13494==   total heap usage: 2,526 allocs, 2,526 frees, 278,336 bytes allocated
==13494== 
==13494== All heap blocks were freed -- no leaks are possible
==13494== 
==13494== For counts of detected and suppressed errors, rerun with: -v
==13494== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Test printRooms() (valgrind)" tags="[valgrind][weight=20]" filename="tests/unit_tests.cpp" line="32">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="0" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [30/30] - Test printRooms() for overall output

- **Points**: 30 / 30





### ✓ - [40/40] - Test printRooms() for individual output

- **Points**: 40 / 40





---

This report was generated for **shwang53** using **cb57d0fe8aefacfa84406a865fdfddae4ce1e071** (from **September 17th 2018, 1:00:00 am**)

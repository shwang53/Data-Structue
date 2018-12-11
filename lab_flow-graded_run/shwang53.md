


## Score: 10/10 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c graph.cpp -o .objs/graph.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c NetworkFlow.cpp -o .objs/NetworkFlow.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c tests/unit_tests.cpp -o .objs/tests/unit_tests.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/graph.o .objs/NetworkFlow.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/unit_tests.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lpthread -o test

```


### ✓ - [1/1] - Graph a - 4 -> b  has flow of 4.

- **Points**: 1 / 1

```
==18900== Memcheck, a memory error detector
==18900== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==18900== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==18900== Command: ./test -r xml "Graph\ a\ -\ 4\ -\>\ b\ \ has\ flow\ of\ 4."
==18900== 
==18900== 
==18900== HEAP SUMMARY:
==18900==     in use at exit: 0 bytes in 0 blocks
==18900==   total heap usage: 2,020 allocs, 2,020 frees, 236,976 bytes allocated
==18900== 
==18900== All heap blocks were freed -- no leaks are possible
==18900== 
==18900== For counts of detected and suppressed errors, rerun with: -v
==18900== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Graph a - 4 -> b  has flow of 4." tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="10">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing flow through two pipes - secret test

- **Points**: 1 / 1

```
==18904== Memcheck, a memory error detector
==18904== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==18904== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==18904== Command: ./test -r xml "Testing\ flow\ through\ two\ pipes\ -\ secret\ test"
==18904== 
==18904== 
==18904== HEAP SUMMARY:
==18904==     in use at exit: 0 bytes in 0 blocks
==18904==   total heap usage: 2,062 allocs, 2,062 frees, 240,152 bytes allocated
==18904== 
==18904== All heap blocks were freed -- no leaks are possible
==18904== 
==18904== For counts of detected and suppressed errors, rerun with: -v
==18904== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing flow through two pipes - secret test" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="23">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Graph a - 10 -> b  has flow of 10.

- **Points**: 1 / 1

```
==18907== Memcheck, a memory error detector
==18907== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==18907== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==18907== Command: ./test -r xml "Graph\ a\ -\ 10\ -\>\ b\ \ has\ flow\ of\ 10."
==18907== 
==18907== 
==18907== HEAP SUMMARY:
==18907==     in use at exit: 0 bytes in 0 blocks
==18907==   total heap usage: 2,020 allocs, 2,020 frees, 236,976 bytes allocated
==18907== 
==18907== All heap blocks were freed -- no leaks are possible
==18907== 
==18907== For counts of detected and suppressed errors, rerun with: -v
==18907== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Graph a - 10 -> b  has flow of 10." tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="40">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing flow through two pipes

- **Points**: 1 / 1

```
==18959== Memcheck, a memory error detector
==18959== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==18959== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==18959== Command: ./test -r xml "Testing\ flow\ through\ two\ pipes"
==18959== 
==18959== 
==18959== HEAP SUMMARY:
==18959==     in use at exit: 0 bytes in 0 blocks
==18959==   total heap usage: 2,062 allocs, 2,062 frees, 239,928 bytes allocated
==18959== 
==18959== All heap blocks were freed -- no leaks are possible
==18959== 
==18959== For counts of detected and suppressed errors, rerun with: -v
==18959== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing flow through two pipes" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="53">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing simple backflow - secret

- **Points**: 1 / 1

```
==18978== Memcheck, a memory error detector
==18978== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==18978== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==18978== Command: ./test -r xml "Testing\ simple\ backflow\ -\ secret"
==18978== 
==18978== 
==18978== HEAP SUMMARY:
==18978==     in use at exit: 0 bytes in 0 blocks
==18978==   total heap usage: 2,129 allocs, 2,129 frees, 245,664 bytes allocated
==18978== 
==18978== All heap blocks were freed -- no leaks are possible
==18978== 
==18978== For counts of detected and suppressed errors, rerun with: -v
==18978== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing simple backflow - secret" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="70">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing simple backflow

- **Points**: 1 / 1

```
==18983== Memcheck, a memory error detector
==18983== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==18983== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==18983== Command: ./test -r xml "Testing\ simple\ backflow"
==18983== 
==18983== 
==18983== HEAP SUMMARY:
==18983==     in use at exit: 0 bytes in 0 blocks
==18983==   total heap usage: 2,108 allocs, 2,108 frees, 241,448 bytes allocated
==18983== 
==18983== All heap blocks were freed -- no leaks are possible
==18983== 
==18983== For counts of detected and suppressed errors, rerun with: -v
==18983== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing simple backflow" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="93">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing full pipe usage - secret

- **Points**: 1 / 1

```
==19056== Memcheck, a memory error detector
==19056== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19056== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==19056== Command: ./test -r xml "Testing\ full\ pipe\ usage\ -\ secret"
==19056== 
==19056== 
==19056== HEAP SUMMARY:
==19056==     in use at exit: 0 bytes in 0 blocks
==19056==   total heap usage: 2,140 allocs, 2,140 frees, 246,456 bytes allocated
==19056== 
==19056== All heap blocks were freed -- no leaks are possible
==19056== 
==19056== For counts of detected and suppressed errors, rerun with: -v
==19056== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing full pipe usage - secret" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="114">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing full pipe usage

- **Points**: 1 / 1

```
==19072== Memcheck, a memory error detector
==19072== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19072== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==19072== Command: ./test -r xml "Testing\ full\ pipe\ usage"
==19072== 
==19072== 
==19072== HEAP SUMMARY:
==19072==     in use at exit: 0 bytes in 0 blocks
==19072==   total heap usage: 2,154 allocs, 2,154 frees, 244,664 bytes allocated
==19072== 
==19072== All heap blocks were freed -- no leaks are possible
==19072== 
==19072== For counts of detected and suppressed errors, rerun with: -v
==19072== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing full pipe usage" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="139">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing 3 x 3 plumbing - secret

- **Points**: 1 / 1

```
==19078== Memcheck, a memory error detector
==19078== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19078== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==19078== Command: ./test -r xml "Testing\ 3\ x\ 3\ plumbing\ -\ secret"
==19078== 
==19078== 
==19078== HEAP SUMMARY:
==19078==     in use at exit: 0 bytes in 0 blocks
==19078==   total heap usage: 2,222 allocs, 2,222 frees, 253,528 bytes allocated
==19078== 
==19078== All heap blocks were freed -- no leaks are possible
==19078== 
==19078== For counts of detected and suppressed errors, rerun with: -v
==19078== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing 3 x 3 plumbing - secret" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="164">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing 3 x 3 plumbing

- **Points**: 1 / 1

```
==19097== Memcheck, a memory error detector
==19097== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19097== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==19097== Command: ./test -r xml "Testing\ 3\ x\ 3\ plumbing"
==19097== 
==19097== 
==19097== HEAP SUMMARY:
==19097==     in use at exit: 0 bytes in 0 blocks
==19097==   total heap usage: 2,223 allocs, 2,223 frees, 251,568 bytes allocated
==19097== 
==19097== All heap blocks were freed -- no leaks are possible
==19097== 
==19097== For counts of detected and suppressed errors, rerun with: -v
==19097== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing 3 x 3 plumbing" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="203">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **shwang53** using **114edfc722a4ee02eaade5b6ee46e4b0f0b97d9a** (from **December 10th 2018, 12:15:00 am**)

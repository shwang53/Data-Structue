


## Score: 25/45 (55.56%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c tests/basic.cpp -o .objs/tests/basic.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/basic.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lpthread -o test

```


### ✓ - [5/5] - test_insertion_idx_emp

- **Points**: 5 / 5





### ✓ - [5/5] - test_insertion_idx_small

- **Points**: 5 / 5





### ✓ - [5/5] - test_btree3_small

- **Points**: 5 / 5

```
==3436== Memcheck, a memory error detector
==3436== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3436== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==3436== Command: ./test -r xml "test_btree3_small"
==3436== 
==3436== 
==3436== HEAP SUMMARY:
==3436==     in use at exit: 0 bytes in 0 blocks
==3436==   total heap usage: 1,765 allocs, 1,765 frees, 222,808 bytes allocated
==3436== 
==3436== All heap blocks were freed -- no leaks are possible
==3436== 
==3436== For counts of detected and suppressed errors, rerun with: -v
==3436== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_btree3_small" tags="[valgrind][weight=5]" filename="tests/basic.cpp" line="114">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="10" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="10" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - test_btree3_large_seq

- **Points**: 5 / 5





### ✓ - [5/5] - test_btree3_large_rand

- **Points**: 5 / 5





### ✗ - [0/5] - test_btree64_large_seq

- **Points**: 0 / 5


```
Original: key_val.second == ret
Expanded: 1 == 0
```


### ✗ - [0/5] - test_btree64_large_rand

- **Points**: 0 / 5


```
Original: key_val.second == ret
Expanded: 1326571764 (0x4f11e0f4) == 0
```


### ✗ - [0/5] - test_btree128_med_rand

- **Points**: 0 / 5


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_btree128_med_rand" tags="[valgrind][weight=5]" filename="tests/basic.cpp" line="169">
      <Expression success="false" type="REQUIRE" filename="tests/basic.cpp" line="60">
        <Original>
          key_val.second == ret
        </Original>
        <Expanded>
          1326571764 (0x4f11e0f4) == 0
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - test_btree12_strings

- **Points**: 0 / 5


```
Original: key_val.second == ret
Expanded: "meco" == ""
```


---

This report was generated for **shwang53** using **4d382ad8e8455f521f64bbd18f97597eda17dc63** (from **October 29th 2018, 12:15:00 am**)

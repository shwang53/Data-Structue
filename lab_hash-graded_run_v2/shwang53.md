


## Score: 84/150 (56.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c hashes.cpp -o .objs/hashes.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c textfile.cpp -o .objs/textfile.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c tests/test-lp.cpp -o .objs/tests/test-lp.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c tests/test-dh.cpp -o .objs/tests/test-dh.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c tests/test-sc.cpp -o .objs/tests/test-sc.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/hashes.o .objs/textfile.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/test-lp.o .objs/tests/test-dh.o .objs/tests/test-sc.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lpthread -o test

```


### ✗ - [0/6] - LP::testRemoveEASY

- **Points**: 0 / 6


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testRemoveEASY" tags="[valgrind][weight=6]" filename="tests/test-lp.cpp" line="13">
      <Expression success="false" filename="tests/test-lp.cpp" line="13">
        <Original>
          {Unknown expression after the reported line}
        </Original>
        <Expanded>
          {Unknown expression after the reported line}
        </Expanded>
        <FatalErrorCondition filename="tests/test-lp.cpp" line="13">
          SIGABRT - Abort (abnormal termination) signal
        </FatalErrorCondition>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="1" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/10] - LP::testRemoveHard

- **Points**: 0 / 10


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testRemoveHard" tags="[valgrind][weight=10]" filename="tests/test-lp.cpp" line="35">
      <Expression success="false" filename="tests/test-lp.cpp" line="35">
        <Original>
          {Unknown expression after the reported line}
        </Original>
        <Expanded>
          {Unknown expression after the reported line}
        </Expanded>
        <FatalErrorCondition filename="tests/test-lp.cpp" line="35">
          SIGABRT - Abort (abnormal termination) signal
        </FatalErrorCondition>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="1" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/7] - LP::testResizeOnce

- **Points**: 0 / 7


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testResizeOnce" tags="[valgrind][weight=7]" filename="tests/test-lp.cpp" line="63">
      <FatalErrorCondition filename="tests/test-lp.cpp" line="63">
        SIGABRT - Abort (abnormal termination) signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✓ - [11/11] - LP::testResizeAll

- **Points**: 11 / 11

```
==27737== Memcheck, a memory error detector
==27737== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27737== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==27737== Command: ./test -r xml "LP::testResizeAll"
==27737== 
==27737== 
==27737== HEAP SUMMARY:
==27737==     in use at exit: 0 bytes in 0 blocks
==27737==   total heap usage: 1,917 allocs, 1,917 frees, 240,741 bytes allocated
==27737== 
==27737== All heap blocks were freed -- no leaks are possible
==27737== 
==27737== For counts of detected and suppressed errors, rerun with: -v
==27737== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testResizeAll" tags="[valgrind][weight=11]" filename="tests/test-lp.cpp" line="84">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [6/6] - LP::testInsertEasy

- **Points**: 6 / 6

```
==27749== Memcheck, a memory error detector
==27749== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27749== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==27749== Command: ./test -r xml "LP::testInsertEasy"
==27749== 
==27749== 
==27749== HEAP SUMMARY:
==27749==     in use at exit: 0 bytes in 0 blocks
==27749==   total heap usage: 1,899 allocs, 1,899 frees, 242,709 bytes allocated
==27749== 
==27749== All heap blocks were freed -- no leaks are possible
==27749== 
==27749== For counts of detected and suppressed errors, rerun with: -v
==27749== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testInsertEasy" tags="[valgrind][weight=6]" filename="tests/test-lp.cpp" line="111">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/10] - LP::testInsertHard

- **Points**: 0 / 10


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testInsertHard" tags="[valgrind][weight=10]" filename="tests/test-lp.cpp" line="131">
      <Expression success="false" filename="tests/test-lp.cpp" line="131">
        <Original>
          {Unknown expression after the reported line}
        </Original>
        <Expanded>
          {Unknown expression after the reported line}
        </Expanded>
        <FatalErrorCondition filename="tests/test-lp.cpp" line="131">
          SIGABRT - Abort (abnormal termination) signal
        </FatalErrorCondition>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="1" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/6] - DH::testRemoveEASY

- **Points**: 0 / 6


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testRemoveEASY" tags="[valgrind][weight=6]" filename="tests/test-dh.cpp" line="15">
      <Expression success="false" filename="tests/test-dh.cpp" line="15">
        <Original>
          {Unknown expression after the reported line}
        </Original>
        <Expanded>
          {Unknown expression after the reported line}
        </Expanded>
        <FatalErrorCondition filename="tests/test-dh.cpp" line="15">
          SIGABRT - Abort (abnormal termination) signal
        </FatalErrorCondition>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="1" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/10] - DH::testRemoveHard

- **Points**: 0 / 10


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testRemoveHard" tags="[valgrind][weight=10]" filename="tests/test-dh.cpp" line="36">
      <Expression success="false" filename="tests/test-dh.cpp" line="36">
        <Original>
          {Unknown expression after the reported line}
        </Original>
        <Expanded>
          {Unknown expression after the reported line}
        </Expanded>
        <FatalErrorCondition filename="tests/test-dh.cpp" line="36">
          SIGABRT - Abort (abnormal termination) signal
        </FatalErrorCondition>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="1" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/7] - DH::testResizeOnce

- **Points**: 0 / 7

```
==27768== Memcheck, a memory error detector
==27768== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27768== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==27768== Command: ./test -r xml "DH::testResizeOnce"
==27768== 
==27768== Invalid read of size 1
==27768==    at 0x43ACC6: DHHashTable<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>::findIndex(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const (dhhashtable.cpp:137)
==27768==    by 0x43A01C: DHHashTable<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>::keyExists(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const (dhhashtable.cpp:175)
==27768==    by 0x436CBF: ____C_A_T_C_H____T_E_S_T____4() (test-dh.cpp:71)
==27768==    by 0x473AE2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:9870)
==27768==    by 0x464396: Catch::TestCase::invoke() const (catch.hpp:9771)
==27768==    by 0x4642C8: Catch::RunContext::invokeActiveTestCase() (catch.hpp:8655)
==27768==    by 0x461066: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:8624)
==27768==    by 0x45F6C1: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:8419)
==27768==    by 0x468423: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:8967)
==27768==    by 0x466EAE: Catch::Session::runInternal() (catch.hpp:9151)
==27768==    by 0x466B8E: Catch::Session::run() (catch.hpp:9108)
==27768==    by 0x466B0C: Catch::Session::run(int, char**) (catch.hpp:9076)
==27768==  Address 0x60b2b7f is 0 bytes after a block of size 79 alloc'd
==27768==    at 0x4C29C23: malloc (vg_replace_malloc.c:299)
==27768==    by 0x50EED29: operator new(unsigned long) (in /class/cs225/lm35/lib/libc++.so.1.0)
==27768==    by 0x43A75B: DHHashTable<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>::resizeTable() (dhhashtable.cpp:197)
==27768==    by 0x43A153: DHHashTable<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>::insert(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int const&) (dhhashtable.cpp:96)
==27768==    by 0x436D05: ____C_A_T_C_H____T_E_S_T____4() (test-dh.cpp:73)
==27768==    by 0x473AE2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:9870)
==27768==    by 0x464396: Catch::TestCase::invoke() const (catch.hpp:9771)
==27768==    by 0x4642C8: Catch::RunContext::invokeActiveTestCase() (catch.hpp:8655)
==27768==    by 0x461066: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:8624)
==27768==    by 0x45F6C1: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:8419)
==27768==    by 0x468423: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:8967)
==27768==    by 0x466EAE: Catch::Session::runInternal() (catch.hpp:9151)
==27768== 
==27768== 
==27768== HEAP SUMMARY:
==27768==     in use at exit: 0 bytes in 0 blocks
==27768==   total heap usage: 2,020 allocs, 2,020 frees, 247,317 bytes allocated
==27768== 
==27768== All heap blocks were freed -- no leaks are possible
==27768== 
==27768== For counts of detected and suppressed errors, rerun with: -v
==27768== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testResizeOnce" tags="[valgrind][weight=7]" filename="tests/test-dh.cpp" line="64">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [11/11] - DH::testResizeAll

- **Points**: 11 / 11

```
==27780== Memcheck, a memory error detector
==27780== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27780== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==27780== Command: ./test -r xml "DH::testResizeAll"
==27780== 
==27780== 
==27780== HEAP SUMMARY:
==27780==     in use at exit: 0 bytes in 0 blocks
==27780==   total heap usage: 1,917 allocs, 1,917 frees, 240,741 bytes allocated
==27780== 
==27780== All heap blocks were freed -- no leaks are possible
==27780== 
==27780== For counts of detected and suppressed errors, rerun with: -v
==27780== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testResizeAll" tags="[valgrind][weight=11]" filename="tests/test-dh.cpp" line="85">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [6/6] - DH::testInsertEasy

- **Points**: 6 / 6

```
==27787== Memcheck, a memory error detector
==27787== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27787== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==27787== Command: ./test -r xml "DH::testInsertEasy"
==27787== 
==27787== 
==27787== HEAP SUMMARY:
==27787==     in use at exit: 0 bytes in 0 blocks
==27787==   total heap usage: 1,899 allocs, 1,899 frees, 242,709 bytes allocated
==27787== 
==27787== All heap blocks were freed -- no leaks are possible
==27787== 
==27787== For counts of detected and suppressed errors, rerun with: -v
==27787== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testInsertEasy" tags="[valgrind][weight=6]" filename="tests/test-dh.cpp" line="111">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/10] - DH::testInsertHard

- **Points**: 0 / 10


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testInsertHard" tags="[valgrind][weight=10]" filename="tests/test-dh.cpp" line="131">
      <Expression success="false" filename="tests/test-dh.cpp" line="131">
        <Original>
          {Unknown expression after the reported line}
        </Original>
        <Expanded>
          {Unknown expression after the reported line}
        </Expanded>
        <FatalErrorCondition filename="tests/test-dh.cpp" line="131">
          SIGABRT - Abort (abnormal termination) signal
        </FatalErrorCondition>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="1" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="1" expectedFailures="0"/>
</Catch>

```


### ✓ - [6/6] - SC::testRemoveEASY

- **Points**: 6 / 6

```
==27824== Memcheck, a memory error detector
==27824== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27824== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==27824== Command: ./test -r xml "SC::testRemoveEASY"
==27824== 
==27824== 
==27824== HEAP SUMMARY:
==27824==     in use at exit: 0 bytes in 0 blocks
==27824==   total heap usage: 1,899 allocs, 1,899 frees, 243,448 bytes allocated
==27824== 
==27824== All heap blocks were freed -- no leaks are possible
==27824== 
==27824== For counts of detected and suppressed errors, rerun with: -v
==27824== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testRemoveEASY" tags="[valgrind][weight=6]" filename="tests/test-sc.cpp" line="14">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - SC::testRemoveHard

- **Points**: 10 / 10

```
==27843== Memcheck, a memory error detector
==27843== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27843== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==27843== Command: ./test -r xml "SC::testRemoveHard"
==27843== 
==27843== 
==27843== HEAP SUMMARY:
==27843==     in use at exit: 0 bytes in 0 blocks
==27843==   total heap usage: 1,921 allocs, 1,921 frees, 244,328 bytes allocated
==27843== 
==27843== All heap blocks were freed -- no leaks are possible
==27843== 
==27843== For counts of detected and suppressed errors, rerun with: -v
==27843== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testRemoveHard" tags="[valgrind][weight=10]" filename="tests/test-sc.cpp" line="35">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [7/7] - SC::testResizeOnce

- **Points**: 7 / 7

```
==27868== Memcheck, a memory error detector
==27868== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27868== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==27868== Command: ./test -r xml "SC::testResizeOnce"
==27868== 
==27868== 
==27868== HEAP SUMMARY:
==27868==     in use at exit: 0 bytes in 0 blocks
==27868==   total heap usage: 2,051 allocs, 2,051 frees, 251,720 bytes allocated
==27868== 
==27868== All heap blocks were freed -- no leaks are possible
==27868== 
==27868== For counts of detected and suppressed errors, rerun with: -v
==27868== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testResizeOnce" tags="[valgrind][weight=7]" filename="tests/test-sc.cpp" line="63">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [11/11] - SC::testResizeAll

- **Points**: 11 / 11

```
==27990== Memcheck, a memory error detector
==27990== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27990== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==27990== Command: ./test -r xml "SC::testResizeAll"
==27990== 
==27990== 
==27990== HEAP SUMMARY:
==27990==     in use at exit: 0 bytes in 0 blocks
==27990==   total heap usage: 1,950 allocs, 1,950 frees, 244,904 bytes allocated
==27990== 
==27990== All heap blocks were freed -- no leaks are possible
==27990== 
==27990== For counts of detected and suppressed errors, rerun with: -v
==27990== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testResizeAll" tags="[valgrind][weight=11]" filename="tests/test-sc.cpp" line="84">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [6/6] - SC::testInsertEasy

- **Points**: 6 / 6

```
==28090== Memcheck, a memory error detector
==28090== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28090== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==28090== Command: ./test -r xml "SC::testInsertEasy"
==28090== 
==28090== 
==28090== HEAP SUMMARY:
==28090==     in use at exit: 0 bytes in 0 blocks
==28090==   total heap usage: 1,898 allocs, 1,898 frees, 243,400 bytes allocated
==28090== 
==28090== All heap blocks were freed -- no leaks are possible
==28090== 
==28090== For counts of detected and suppressed errors, rerun with: -v
==28090== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testInsertEasy" tags="[valgrind][weight=6]" filename="tests/test-sc.cpp" line="110">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - SC::testInsertHard

- **Points**: 10 / 10

```
==28095== Memcheck, a memory error detector
==28095== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28095== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==28095== Command: ./test -r xml "SC::testInsertHard"
==28095== 
==28095== 
==28095== HEAP SUMMARY:
==28095==     in use at exit: 0 bytes in 0 blocks
==28095==   total heap usage: 1,920 allocs, 1,920 frees, 244,280 bytes allocated
==28095== 
==28095== All heap blocks were freed -- no leaks are possible
==28095== 
==28095== For counts of detected and suppressed errors, rerun with: -v
==28095== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testInsertHard" tags="[valgrind][weight=10]" filename="tests/test-sc.cpp" line="130">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **shwang53** using **b9189bc63d657ddfe578598b355f7fe6654ba9c4** (from **November 5th 2018, 12:15:00 am**)

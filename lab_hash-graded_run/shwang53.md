


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
==10038== Memcheck, a memory error detector
==10038== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10038== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==10038== Command: ./test -r xml "LP::testResizeAll"
==10038== 
==10038== 
==10038== HEAP SUMMARY:
==10038==     in use at exit: 0 bytes in 0 blocks
==10038==   total heap usage: 1,917 allocs, 1,917 frees, 240,741 bytes allocated
==10038== 
==10038== All heap blocks were freed -- no leaks are possible
==10038== 
==10038== For counts of detected and suppressed errors, rerun with: -v
==10038== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10041== Memcheck, a memory error detector
==10041== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10041== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==10041== Command: ./test -r xml "LP::testInsertEasy"
==10041== 
==10041== 
==10041== HEAP SUMMARY:
==10041==     in use at exit: 0 bytes in 0 blocks
==10041==   total heap usage: 1,899 allocs, 1,899 frees, 242,709 bytes allocated
==10041== 
==10041== All heap blocks were freed -- no leaks are possible
==10041== 
==10041== For counts of detected and suppressed errors, rerun with: -v
==10041== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10048== Memcheck, a memory error detector
==10048== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10048== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==10048== Command: ./test -r xml "DH::testResizeOnce"
==10048== 
==10048== Invalid read of size 1
==10048==    at 0x43ACC6: DHHashTable<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>::findIndex(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const (dhhashtable.cpp:137)
==10048==    by 0x43A01C: DHHashTable<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>::keyExists(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const (dhhashtable.cpp:175)
==10048==    by 0x436CBF: ____C_A_T_C_H____T_E_S_T____4() (test-dh.cpp:71)
==10048==    by 0x473AE2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:9870)
==10048==    by 0x464396: Catch::TestCase::invoke() const (catch.hpp:9771)
==10048==    by 0x4642C8: Catch::RunContext::invokeActiveTestCase() (catch.hpp:8655)
==10048==    by 0x461066: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:8624)
==10048==    by 0x45F6C1: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:8419)
==10048==    by 0x468423: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:8967)
==10048==    by 0x466EAE: Catch::Session::runInternal() (catch.hpp:9151)
==10048==    by 0x466B8E: Catch::Session::run() (catch.hpp:9108)
==10048==    by 0x466B0C: Catch::Session::run(int, char**) (catch.hpp:9076)
==10048==  Address 0x60b2b7f is 0 bytes after a block of size 79 alloc'd
==10048==    at 0x4C29C23: malloc (vg_replace_malloc.c:299)
==10048==    by 0x50EED29: operator new(unsigned long) (in /class/cs225/lm35/lib/libc++.so.1.0)
==10048==    by 0x43A75B: DHHashTable<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>::resizeTable() (dhhashtable.cpp:197)
==10048==    by 0x43A153: DHHashTable<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>::insert(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int const&) (dhhashtable.cpp:96)
==10048==    by 0x436D05: ____C_A_T_C_H____T_E_S_T____4() (test-dh.cpp:73)
==10048==    by 0x473AE2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:9870)
==10048==    by 0x464396: Catch::TestCase::invoke() const (catch.hpp:9771)
==10048==    by 0x4642C8: Catch::RunContext::invokeActiveTestCase() (catch.hpp:8655)
==10048==    by 0x461066: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:8624)
==10048==    by 0x45F6C1: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:8419)
==10048==    by 0x468423: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:8967)
==10048==    by 0x466EAE: Catch::Session::runInternal() (catch.hpp:9151)
==10048== 
==10048== 
==10048== HEAP SUMMARY:
==10048==     in use at exit: 0 bytes in 0 blocks
==10048==   total heap usage: 2,020 allocs, 2,020 frees, 247,317 bytes allocated
==10048== 
==10048== All heap blocks were freed -- no leaks are possible
==10048== 
==10048== For counts of detected and suppressed errors, rerun with: -v
==10048== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

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
==10085== Memcheck, a memory error detector
==10085== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10085== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==10085== Command: ./test -r xml "DH::testResizeAll"
==10085== 
==10085== 
==10085== HEAP SUMMARY:
==10085==     in use at exit: 0 bytes in 0 blocks
==10085==   total heap usage: 1,917 allocs, 1,917 frees, 240,741 bytes allocated
==10085== 
==10085== All heap blocks were freed -- no leaks are possible
==10085== 
==10085== For counts of detected and suppressed errors, rerun with: -v
==10085== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10111== Memcheck, a memory error detector
==10111== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10111== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==10111== Command: ./test -r xml "DH::testInsertEasy"
==10111== 
==10111== 
==10111== HEAP SUMMARY:
==10111==     in use at exit: 0 bytes in 0 blocks
==10111==   total heap usage: 1,899 allocs, 1,899 frees, 242,709 bytes allocated
==10111== 
==10111== All heap blocks were freed -- no leaks are possible
==10111== 
==10111== For counts of detected and suppressed errors, rerun with: -v
==10111== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10117== Memcheck, a memory error detector
==10117== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10117== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==10117== Command: ./test -r xml "SC::testRemoveEASY"
==10117== 
==10117== 
==10117== HEAP SUMMARY:
==10117==     in use at exit: 0 bytes in 0 blocks
==10117==   total heap usage: 1,899 allocs, 1,899 frees, 243,448 bytes allocated
==10117== 
==10117== All heap blocks were freed -- no leaks are possible
==10117== 
==10117== For counts of detected and suppressed errors, rerun with: -v
==10117== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10124== Memcheck, a memory error detector
==10124== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10124== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==10124== Command: ./test -r xml "SC::testRemoveHard"
==10124== 
==10124== 
==10124== HEAP SUMMARY:
==10124==     in use at exit: 0 bytes in 0 blocks
==10124==   total heap usage: 1,921 allocs, 1,921 frees, 244,328 bytes allocated
==10124== 
==10124== All heap blocks were freed -- no leaks are possible
==10124== 
==10124== For counts of detected and suppressed errors, rerun with: -v
==10124== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10134== Memcheck, a memory error detector
==10134== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10134== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==10134== Command: ./test -r xml "SC::testResizeOnce"
==10134== 
==10134== 
==10134== HEAP SUMMARY:
==10134==     in use at exit: 0 bytes in 0 blocks
==10134==   total heap usage: 2,051 allocs, 2,051 frees, 251,720 bytes allocated
==10134== 
==10134== All heap blocks were freed -- no leaks are possible
==10134== 
==10134== For counts of detected and suppressed errors, rerun with: -v
==10134== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10151== Memcheck, a memory error detector
==10151== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10151== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==10151== Command: ./test -r xml "SC::testResizeAll"
==10151== 
==10151== 
==10151== HEAP SUMMARY:
==10151==     in use at exit: 0 bytes in 0 blocks
==10151==   total heap usage: 1,950 allocs, 1,950 frees, 244,904 bytes allocated
==10151== 
==10151== All heap blocks were freed -- no leaks are possible
==10151== 
==10151== For counts of detected and suppressed errors, rerun with: -v
==10151== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10164== Memcheck, a memory error detector
==10164== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10164== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==10164== Command: ./test -r xml "SC::testInsertEasy"
==10164== 
==10164== 
==10164== HEAP SUMMARY:
==10164==     in use at exit: 0 bytes in 0 blocks
==10164==   total heap usage: 1,898 allocs, 1,898 frees, 243,400 bytes allocated
==10164== 
==10164== All heap blocks were freed -- no leaks are possible
==10164== 
==10164== For counts of detected and suppressed errors, rerun with: -v
==10164== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10170== Memcheck, a memory error detector
==10170== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10170== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==10170== Command: ./test -r xml "SC::testInsertHard"
==10170== 
==10170== 
==10170== HEAP SUMMARY:
==10170==     in use at exit: 0 bytes in 0 blocks
==10170==   total heap usage: 1,920 allocs, 1,920 frees, 244,280 bytes allocated
==10170== 
==10170== All heap blocks were freed -- no leaks are possible
==10170== 
==10170== For counts of detected and suppressed errors, rerun with: -v
==10170== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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

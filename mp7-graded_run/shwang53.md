


## Score: 0/0 (0.00%)


### ✗ - [0/0] - Output from `make`

- **Points**: 0 / 0

```
In file included from tests/GraphTests.cpp:3:
In file included from tests/../Graph.h:77:
tests/../Graph.hpp:106:16: fatal error: no matching member function for call to 'erase'
      edgeList.erase(edge);
      ~~~~~~~~~^~~~~
tests/GraphTests.cpp:99:5: note: in instantiation of member function 'Graph<Vertex, Edge>::removeEdge' requested here
  g.removeEdge("a","c");
    ^
/class/cs225/lm35/bin/../include/c++/v1/list:1003:14: note: candidate function not viable: no known conversion from 'E_byRef' (aka 'reference_wrapper<Edge>') to 'const_iterator' (aka '__list_const_iterator<value_type, __void_pointer>') for 1st argument
    iterator erase(const_iterator __p);
             ^
/class/cs225/lm35/bin/../include/c++/v1/list:1004:14: note: candidate function not viable: requires 2 arguments, but 1 was provided
    iterator erase(const_iterator __f, const_iterator __l);
             ^
1 error generated.
make: *** [.objs/tests/GraphTests.o] Error 1

```
```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c CYOA.cpp -o .objs/CYOA.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c tests/DirectedEdgeTests.cpp -o .objs/tests/DirectedEdgeTests.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c tests/GraphTests.cpp -o .objs/tests/GraphTests.o

```


---

This report was generated for **shwang53** using **ee9b956f1631ec494944b1f8a792732ab377773c** (from **December 13th 2018, 12:05:00 am**)

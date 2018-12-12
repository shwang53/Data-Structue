


## Score: 0/0 (0.00%)


### ✗ - [0/0] - Output from `make`

- **Points**: 0 / 0

```
In file included from tests/GraphTests.cpp:3:
In file included from tests/../Graph.h:3:
/class/cs225/lm35/bin/../include/c++/v1/list:2043:18: fatal error: invalid operands to binary expression ('value_type' (aka 'std::__1::reference_wrapper<Edge>') and 'const value_type' (aka 'const std::__1::reference_wrapper<Edge>'))
        if (*__i == __x)
            ~~~~ ^  ~~~
tests/../Graph.hpp:106:16: note: in instantiation of member function 'std::__1::list<std::__1::reference_wrapper<Edge>, std::__1::allocator<std::__1::reference_wrapper<Edge> > >::remove' requested here
      edgeList.remove(edge);
               ^
tests/GraphTests.cpp:99:5: note: in instantiation of member function 'Graph<Vertex, Edge>::removeEdge' requested here
  g.removeEdge("a","c");
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

This report was generated for **shwang53** using **73959c679f0a0b2420b8c74800e8e9814ba9e20e** (from **December 12th 2018, 12:05:00 am**)

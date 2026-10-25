# Exercise 1.3 – Solutions

## a)

### 1. Missing semicolon

```
./Divide.cpp:3:20: error: expected ';' after namespace name
    3 | using namespace std
      |                    ^
      |                    ;
1 error generated.
```

**Cause:** A `;` is missing at the end of `using namespace std`.

**Solution:** `using namespace std;`

### 2. Wrong return type of `main`

```
./Divide.cpp:6:1: error: 'main' must return 'int'
    6 | void main() {
      | ^~~~
      | int
```

**Cause:** `main` must have the return type `int`, not `void`. In addition, a `return 0;` is missing at the end of the function.

**Solution:** `int main() { ... return 0; }`

### 3. Undeclared variable `b`

```
./Divide.cpp:12:15: error: use of undeclared identifier 'b'
   12 |   cin >> a >> b;
      |               ^
./Divide.cpp:15:16: error: use of undeclared identifier 'b'
   15 |   double x = a/b;
      |                ^
./Divide.cpp:16:34: error: use of undeclared identifier 'b'
   16 |   cout << a << " divided by " << b << " is equal to " << x << endl;
      |                                  ^
3 errors generated.
```

**Cause:** The variable `b` (integer) was not declared before use. This results in three follow-up errors (lines 12, 15 and 16).

**Solution:** Declare `b` before its first use, e.g. `int b;`


## b)

## c)
As we are doing integer division we will recive an incorrect number for every devision that is not outputting an integer as its result. Example 2/1 = 2 but 1/2 = 0
To fix this we would need to initialise the input numbers as a double or float, any floatingpoint datatype works.


## d)
To get additional warnings you use the -Wall and -Wextra flags when running the g++ command.
This outputs:
```
./Divide.cpp:19:12: warning: unused variable 'z' [-Wunused-variable]
   19 |   double y,z;
      |            ^
./Divide.cpp:20:21: warning: variable 'y' is uninitialized when used here [-Wuninitialized]
   20 |   cout << "y = " << y << endl;
      |                     ^
./Divide.cpp:19:11: note: initialize the variable 'y' to silence this warning
   19 |   double y,z;
      |           ^
      |            = 0.0
2 warnings generated.
```

**Cause:** When y is declared it gets a memory-address with a random value in it, this could be any value. This does lead to a random output of a number which cant really be used to calculate anything because its random and has no defined behaviour. The z variable is simply useless because its not used but declared.

**Solution:** Initialise y with double y = 0.0; and remove z.


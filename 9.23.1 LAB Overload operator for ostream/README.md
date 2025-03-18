
  14   │ This program defines a class `Number` that encapsulates an integer and provides methods to set and get the value of this integer. Additionally, it overloads
       │ the `<<` operator to allow objects of the `Number` class to be output using `cout`.
  15   │
  16   │ Here is a brief explanation of each part:
  17   │
  18   │ 1. **CMakeLists.txt**: This file sets up the CMake build system for the project, specifying the minimum CMake version, the project name, the C++ standard to
       │ use, and the source files to compile.
  19   │
  20   │ 2. **Number.h**: This header file declares the `Number` class, which includes:
  21   │    - A constructor to initialize the integer.
  22   │    - Methods to set and get the integer value.
  23   │    - A friend function to overload the `<<` operator for outputting the `Number` object.
  24   │
  25   │ 3. **Number.cpp**: This source file defines the methods and the overloaded `<<` operator for the `Number` class. The `<<` operator outputs the integer value
       │ with a message.
  26   │
  27   │ 4. **main.cpp**: This file contains the `main` function, which:
  28   │    - Reads an integer from the user.
  29   │    - Creates a `Number` object with the input value.
  30   │    - Outputs the `Number` object using `cout`, which invokes the overloaded `<<` operator.
  31   │
  32   │ The program reads an integer from the user, stores it in a `Number` object, and then prints the value using the overloaded `<<` operator.

# Web Assembly 0.1

This is place where Web Assembly journey begin

This is the first web project i made that including WebAssembly

The website bassically do:
  1. Input some number
  2. Calculate the inputed number
  3. Print the result


The special things is, The function for calculate those inputed number
is made in C++ language. After that, it is being compiled using
empscripten. The compiler compile the .cpp code into
.wasm code

from there, Javascript needed to "glue" between the .wasm 
and .html


And that's it

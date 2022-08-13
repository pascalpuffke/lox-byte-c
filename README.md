# lox-byte-c
Full bytecode compiler and interpreter for the Lox language, as explained by the [Crafting Interpreters](https://craftinginterpreters.com) book by Robert Nystrom.

## Notes
**This is effectively a 1:1 copy of the source code snippets contained in the book. No additional functionality has been added.**

It passes all [tests](https://github.com/munificent/craftinginterpreters/tree/master/test) and is even a bit faster than the reference implementation.

Here is a brief summary of what I changed:

- More aggressive inlining, which improves performance by about 8%.
- snake_case instead of camelCase. Not a big deal, just personal preference.

Other than that, this version doesn't include the markup comments from the book, so this code should be a little easier to read.

I don't plan to work on this project any further. Instead, I'm going to rewrite it in C++ and use it as the basis for my own little scripting language, which may end up in its own repository later.

## Building

```bash
$ mkdir build
$ cd build
$ cmake ..
$ cmake --build .
```

You can add `--parallel <threads>` to the last command should you wish to use multiple compile jobs.

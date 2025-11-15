# LfgTester

**Disclaimer:**
*Lfg* stands for *L(ib)F(orty-two)G(o)*.

## What Is It?

This project is much simpler than the forbidden program (often referred to as *francinette*). Its purpose isn't to provide a complete suite of tests but rather to offer a framework where you can add your own tests.
By updating the `srcs/tests` directory, you’ll get a cleaner and more organized output compared to running a giant `main` function.

## How to Use It

1. **Compile Your `libft.a`**
   First, compile your `libft.a` using your own `Makefile`, and place the resulting library file in the `/libs` directory of the LfgTester project.

2. **Modify the Test Files**

   * Go to `/tests/all.c` and comment out any test functions for functions you haven’t implemented yet.
   * Complete the tests in the `srcs/tests` directory as needed.
     Each test should return `2` if it is uncompleted, `1` if it passes, and `0` otherwise.

3. **Run the Tests**
   Now, you should be able to run `make` and execute the tests.

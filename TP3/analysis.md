**1\.** a) The parent process has the PPID 2510 (bash). The PPID of the child process is equal to the PID of the parent process. The block of code after the if statement is executed by the parent and the block of code after the else by the child (assuming no errors with the fork call occur).

b) The PIDs of the parent and the child processes keep incrementing with each execution.

**2\.** a) The program can write the numbers 1, 2, 3, 4 and 5 to the screen.

c) With printf() calls, 123\n145 is written to the screen, since both processes are writing to the same line buffer.

d) After the newline, stdout is flushed, so each process writes to its own buffer.

**6\.** c) Since the child processes will not return, they will continue to run the code inside the for loop and create their own child processes. The number of child processes will grow at an exponential rate.

**7\.** The program executes gcc and compiles the .c file with the name given by the first command line argument.

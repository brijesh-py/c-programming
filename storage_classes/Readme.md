In C programming, storage classes define the scope (visibility) and lifetime of variables. There are four storage classes in C: auto, register, static, and extern.

1. **auto**: This is the default storage class for local variables. Variables declared within a function without a storage class specifier are treated as auto by default. They are automatically destroyed when the function exits.

```c
void func() {
    auto int x = 10; // auto is optional here
}
```

2. **register**: This storage class is used to define local variables that should be stored in a register instead of RAM. However, the compiler can ignore this request, and it's typically used as a hint to the compiler for optimization.

```c
void func() {
    register int x = 10;
}
```

3. **static**: Static variables have a lifetime throughout the program's execution and retain their value between function calls. They are initialized only once, and their scope is limited to the file in which they are declared if declared outside a function. Inside a function, they retain their value between function calls.

```c
void func() {
    static int x = 0;
    x++;
}
```

4. **extern**: Extern variables are used to declare variables that are defined in other files. They are declared in one file and can be used in other files by using the `extern` keyword.

File1.c:

```c
int count;
```

File2.c:

```c
extern int count;
```

These are the basic storage classes in C, each serving different purposes in managing variables within programs.
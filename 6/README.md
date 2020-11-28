# Лаборатрная работа №6
## ПМ-31
Шувалова Виктория, Сахно Андрей, Решетников Егор
### Вариант 6

# Задание 1
![](Sreenshots/task_1_1.png)\
&nbsp;
### 3 вариант

Код
```
.data
    printf_format:
        .string "f = %d\nx = 4, y = 30\n"
    x:
        .int 4
    y:
        .int 30
.globl main
    main:
        movl y, %eax
        movl x, %ebx
        xor %edx, %edx
        idiv %ebx

        cmpl $0, %edx
        jne y_mod_x_not_zero
        
        pushl %eax
        pushl $printf_format
        call printf
        jmp end

    y_mod_x_not_zero:
        movl x, %eax
        movl y, %edx
        mul %edx
        pushl %eax
        pushl $printf_format
        call printf
    end:
        addl $8, %esp
        movl $0, %eax
        movl $0, %edx
        ret
```
### Для запуска
Из директории с 6 лабой:
````console
$gcc -m32 task_1.s 
$./a.out 
````


Результат\
![](Sreenshots/task_1_2.png)
&nbsp;

С другими параметрами
&nbsp;

![](Sreenshots/task_1_3.png)
# Задание 2

![](Sreenshots/task_2_1.png)\
&nbsp;
### 7 вариант

Код
```
.data
    printf_format:
        .string "y = %f\nx = 15\n"
    x:
        .double 15
    y:
        .double 0
    a:
        .double 1
    b:
        .double -13
    c:
        .double 3
.globl main
    main:
        fldl x
        fldl b
        fadd
        ftst
        fstsw %ax
        sahf
        jbe less_than_13

        fldl c
        fldl x
        fdiv
        fldl a
        fsub

        jmp end
        less_than_13:
        fldl x
        fldl a
        fadd
        end:
        fstpl (y)
        pushl (y+4)
        pushl (y)
        push $printf_format
        call printf
        add $12, %esp
        ret
```
### Для запуска
Из директории с 6 лабой:
````console
$gcc -m32 -lm task_2.s
$./a.out 
````
Результат\
![](Sreenshots/task_2_2.png)
&nbsp;

С другими параметрами
&nbsp;

![](Sreenshots/task_2_3.png)
# Задание 3

![](Sreenshots/task_3_1.png)\
&nbsp;
### 2 вариант

Код
```
.data
    input: 
        .string "%d"
    output:
        .string "a(%d)=%d\n"
    input_N_message:
        .string "Enter N: "
    input_x_message:
        .string "Enter x: "
    x:
        .int 0
    N:
        .int 0
    i:
        .int -1
    sequence:
        .int 0
.globl main
    main:
        pushl %ebp
        movl %esp, %ebp
        subl $40, %esp
        movl $input_x_message, (%esp)
        call printf
        leal 36(%esp), %eax
        movl %eax, 4(%esp)
        movl $input, (%esp)
        call scanf
        movl -4(%ebp), %eax
        movl %eax, x
        movl %ebp, %esp
        popl %ebp
        pushl %ebp
        movl %esp, %ebp
        subl $40, %esp
        movl $input_N_message, (%esp)
        call printf
        leal 36(%esp), %eax
        movl %eax, 4(%esp)
        movl $input, (%esp)
        call scanf
        movl -4(%ebp), %eax
        movl %eax, N
        movl %ebp, %esp
        popl %ebp
    start_step:
        cmpl $0,N
        je end_loop
        addl $-1, N
        addl $1, i
    end_step:
        push sequence
        push sequence
        push i
        push $output
        call printf
        addl $16, %esp
        movl x, %eax
        addl %eax, sequence
        jmp start_step
    end_loop:
        ret
```
### Для запуска
Из директории с 6 лабой:
````console
$gcc -m32 -lm task_3.s
$./a.out 
````
Результат\
![](Sreenshots/task_3_2.png)
&nbsp;

С другими параметрами
&nbsp;

![](Sreenshots/task_3_3.png)
# Задание 4

![](Sreenshots/task_4_1.png)\
&nbsp;
### Раньше мы были МП-30, вариант 1

Код

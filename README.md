*This project has been created as part of the 42 curriculum by yoandria.*

# Libft - My very first own library

> This project consist of coding a C library encompassing usual functions that I will use in some of my subsequent projects.

[![42 Project](https://img.shields.io/badge/42-Project-black)](https://42.fr)
![Language](https://img.shields.io/badge/Language-C-blue)

## Description

This project was realised in order to:

- reimplement some functions of the **C standard library (libc)**
- dive deeper into memory allocation (`malloc`, `free`) through string manipulations
- discover the concept of ***linked list***

## Instructions

### Installation

To get the project, run the following commands into a terminal and replace the `folder_name` variable by the name you want:

```bash
git clone git@vogsphere.42antananarivo.mg:vogsphere?intra-uuid-1457abb8-089b-44c2-9552-5417de7360f2-7176561-yoandria folder_name
cd folder_name
```

### Compilation

To generate the `libft.a` library, run one of the two following commands:

```bash
make all 
```

```bash
make  
```

After that, you should get a file named ***"libft.a"*** in your folder. This is the library file encompassing all the functions.

Here are some utility functions using the `make` utilitary:

- `make clean`: To remove all **object files**
- `make fclean`: remove the **object files** and **libft.a** archive
- `make re`: Clean all the compilation generated files (fclean) and **recompile** the project to get the library

### Execution

- Create a file using one of the library's functions `ft_atoi` (e.g., in myprog.c)

```C
#include <stdio.h>  
#include "libft.h" // Include the header file in the program

int main(void)
{
    printf("%d", ft_atoi("-459"));
    return (0);
}
```

- Then compile it, using the following command:

```bash
cc -o myprog myprog.c -L. -lft
```

- The program can then be run:

```bash
./myprog
```

<details>
<summary>Click here to see the list of all the functions</summary>

|Libc functions|Additional functions|Linked list      |
|:-------------|:-------------------|:----------------|
|`ft_isalpha`  |`ft_substr`         |`ft_lstnew`      |
|`ft_isdigit`  |`ft_strjoin`        |`ft_lstadd_front`|
|`ft_isalnum`  |`ft_strtrim`        |`ft_lst_size`    |
|`ft_isascii`  |`ft_split`          |`ft_lstlast`     |
|`ft_isprint`  |`ft_itoa`           |`ft_lstadd_back` |
|`ft_strlen`   |`ft_strmapi`        |`ft_lstdelone`   |
|`ft_memset`   |`ft_striteri`       |`ft_lstclear`    |
|`ft_bzero`    |`ft_putchar_fd`     |`ft_lstiter`     |
|`ft_memcpy`   |`ft_putstr_fd`      |`ft_lstmap`      |
|`ft_memmove`  |`ft_putendl_fd`     |
|`ft_strlcpy`  |`ft_putnbr_fd`      |
|`ft_strlcat`  |
|`ft_toupper`  |
|`ft_tolower`  |
|`ft_strchr`   |
|`ft_strrchr`  |
|`ft_strncmp`  |
|`ft_memchr`   |
|`ft_memcmp`   |
|`ft_strnstr`  |
|`ft_atoi`     |
|`ft_calloc`   |
|`ft_strdup`   |

- Structure defined in the *libft.h* header file

```C
typedef struct s_list
{
    void            *content;
    struct  s_list  *next;  
}   t_list;
```

</details>

## Resources

### References

- [geeksforgeeks](https://www.geeksforgeeks.org/c/c-programming-language/)
- [Low level youtube channel](https://www.youtube.com/channel/UC6biysICWOJ-C3P4Tyeggzg)
- [stack overflow](https://stackoverflow.com/questions)
- [Linux manual page](https://man7.org/linux/man-pages/man1/man.1.html)

### AI usage

In this project, AI was **never** used to give the answer but:

- To break down the complexity of new notions such as *double pointer*
- To give hints about where optimisation could be made in functional code
- To debug SIGSEV/memory related failures

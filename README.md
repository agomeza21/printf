*This project has been created as part of the 42 curriculum by agomez-a.*

# ft_printf

## Description

ft_printf is an implementation of the standard `printf` function in C.  
The project aims to recreate the behavior of `printf` by handling various format specifiers such as:

- `%c` – character
- `%s` – string
- `%d` / `%i` – signed integers
- `%u` – unsigned integers
- `%x` / `%X` – hexadecimal numbers (lowercase / uppercase)
- `%p` – pointers
- `%%` – literal percent sign

The implementation focuses on correctly counting the number of characters printed, handling `NULL` strings, and managing edge cases like `INT_MIN`. The project uses recursion for number and hexadecimal conversions to simplify memory management.

## Instructions

To compile the project:

```make```

This will generate the static library:

libftprintf.a

To clean object files:

```make clean```

To remove everything including the library:

```make fclean```

To rebuild completely:

```make re```

## RESOURCES

### Documentation and References
- Online resources for clarifying concepts.
- Guidance and help from classmates when needed.

### Use of AI
During this project, artificial intelligence was used as a learning aid.
- AI provided explanations about how printf works, but **never gave code**.
- Occasionally AI was used to review or suggest corrections, again **without providing code**.
- AI served only as a supportive tool, similar to a teacher or tutor.

## Algorithm and Data Structure Choices

The algorithm used in ft_printf consists of:

1. **Linear scan** of the input string (`const char *str`) to detect format specifiers.  
2. **Dispatch** to specific conversion functions through `format_especifiers` and `text_conversion`.  
3. **Recursive decomposition** of numbers for printing decimal and hexadecimal digits.

Regarding data structures:

- A simple array of characters (`"cspdiuxX"`) stores the allowed format specifiers.  
- Recursion replaces temporary buffers, reducing memory overhead and simplifying the implementation.
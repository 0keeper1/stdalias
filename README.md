# stdalias

`stdalias` is a simple C library that provides type aliases for common C types, making your code more readable and portable across different systems. This single-header library helps in defining standard types such as `byte`, `u8`, `i8`, and more.

## Features

- Type aliases for common integer, floating-point, and character types.
- Easy to include in any C project.
- Cross-platform support with Meson as the build system.

## Installation

Clone the repository and build with Meson:

```bash
git clone https://github.com/0keeper1/stdalias.git
cd stdalias
meson setup build
meson compile -C build
```

To use in your project, simply include the `stdalias.h` header:

```c
#include "stdalias.h"
```

## Aliased Types

- `byte`, `u8`, `i8`, `u16`, `i16`, `u32`, `i32`, `u64`, `i64`, `u128`, `i128`
- `usize`, `iptr`, `ptr`, `maxi`, `umaxi`
- Floating-point types: `f32`, `f64`, `f128`
- Character types: `wchar`, `wint`

## Macros

- `__asm__`: A macro redefining `__asm__` to the `asm` keyword used for inline assembly in C. This allows assembly instructions to be embedded directly into C code.

- `wstring`: A macro that defines a structure representing a wide character string. It consists of:
    - `cap`: The total allocated size of the string in bytes.
    - `pointer`: A pointer to the array of wide characters.
    - `len`: The length of the string excluding the null terminator.


## License

This project is licensed under the MIT License.
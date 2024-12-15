# unstdalias

`unstdalias` is a lightweight C library that provides type aliases for common C types, enhancing code readability and portability. This single-header library defines standard types like `byte`, `u8`, `i8`, and many more, simplifying type management in C projects.

## Features

- **Comprehensive Type Aliases:** Covers integers, floating-point types, character types, and utility types.
- **Single-Header Simplicity:** Easy to integrate into any C project.
- **Cross-Platform Compatibility:** Built with Meson for seamless portability.

## Installation

Clone the repository and build with Meson:

```bash
git clone https://github.com/0keeper1/unstdalias.git
cd unstdalias
meson setup build
meson compile -C build
```

### Using as a Meson Dependency

1. Create a `subprojects` directory.
2. Add `unstdalias.wrap` in the `subprojects` folder with the following content:

```ini
[wrap-git]
url = https://github.com/0keeper1/unstdalias.git
revision = master
```

3. Update your `meson.build` file:

```meson
unstdalias = subproject('unstdalias')
unstdalias_dep = unstdalias.get_variable('unstdalias_dep')
```

4. Include the header file in your C project:

```c
#include "unstdalias.h"
```

## Aliased Types

### Integer Types
- **8-bit:** `byte`, `u8`, `i8`
- **16-bit:** `u16`, `i16`
- **32-bit:** `u32`, `i32`
- **64-bit:** `u64`, `i64`
- **128-bit (GCC/Clang only):** `u128`, `i128`

### Fast Integer Types
- **8-bit:** `fi8`, `fu8`
- **16-bit:** `fi16`, `fu16`
- **32-bit:** `fi32`, `fu32`
- **64-bit:** `fi64`, `fu64`

### Utility Types
- `usize`: Unsigned size type
- `iptr`: Signed integer pointer type
- `ptr`: Unsigned integer pointer type
- `maxi`: Maximum signed integer type
- `umaxi`: Maximum unsigned integer type

### Floating-Point Types
- `f32`: Single precision (32-bit)
- `f64`: Double precision (64-bit)
- `f128`: Quadruple precision (128-bit)

### Character Types
- `wchar`: Wide character type
- `wint`: Wide integer type for I/O

## Macros

- **`__asm__`:** Redefines `__asm__` to `asm`, enabling inline assembly in C code.

- **`wstring`:** Defines a wide character string structure:
  - `cap`: Total allocated size in bytes.
  - `pointer`: Pointer to the wide character array.
  - `len`: Length of the string excluding the null terminator.

- **`string`:** Defines a standard C string structure:
  - `cap`: Total allocated size in bytes.
  - `pointer`: Pointer to the character array.
  - `len`: Length of the string excluding the null terminator.

## License

This project is licensed under the MIT License.

## Contributing

Contributions are welcome! Feel free to open issues or submit pull requests.

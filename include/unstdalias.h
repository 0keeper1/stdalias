#pragma once

#include <stdint.h>
#include <wchar.h>

/**
 * @brief 8-bit unsigned integer (1 byte)
 *
 * This type is used for representing 8-bit unsigned integer values.
 * It can hold values from 0 to 255.
 *
 * It is equivalent to `uint8_t` defined in `<stdint.h>`.
 *
 * @see uint8_t
 * @see https://en.cppreference.com/w/c/types/integer
 */
typedef uint8_t byte;

/**
 * @brief Unsigned 8-bit integer (1 byte)
 *
 * This type represents a 1-byte unsigned integer, which can hold
 * values from 0 to 255.
 * It is a synonym for `byte`, commonly used to represent small data
 * sizes such as individual characters in ASCII encoding.
 *
 * @see byte
 * @see uint8_t
 */
typedef uint8_t u8;

/**
 * @brief Signed 8-bit integer (1 byte)
 *
 * This type represents an 8-bit signed integer. It can hold values
 * from -128 to 127.
 * It is typically used when dealing with small signed numeric data.
 *
 * @see int8_t
 * @see https://en.cppreference.com/w/c/types/integer
 */
typedef int8_t i8;

/**
 * @brief Unsigned 16-bit integer (2 bytes)
 *
 * This type represents a 2-byte unsigned integer, which can hold
 * values from 0 to 65535.
 * Commonly used for small counters or small ranges of numeric values.
 *
 * @see uint16_t
 * @see https://en.cppreference.com/w/c/types/integer
 */
typedef uint16_t u16;

/**
 * @brief Signed 16-bit integer (2 bytes)
 *
 * This type represents a 2-byte signed integer, which can hold values
 * from -32768 to 32767.
 * Often used for small signed numeric data, especially in applications
 * requiring moderate ranges of integers.
 *
 * @see int16_t
 * @see https://en.cppreference.com/w/c/types/integer
 */
typedef int16_t i16;

/**
 * @brief Unsigned 32-bit integer (4 bytes)
 *
 * This type represents a 4-byte unsigned integer, capable of holding values
 * from 0 to 4294967295.
 * It is commonly used for larger numeric values and counting purposes.
 *
 * @see uint32_t
 * @see https://en.cppreference.com/w/c/types/integer
 */
typedef uint32_t u32;

/**
 * @brief Signed 32-bit integer (4 bytes)
 *
 * This type represents a 4-byte signed integer, holding values from
 * -2147483648 to 2147483647.
 * It is typically used for general-purpose integer storage and arithmetic.
 *
 * @see int32_t
 * @see https://en.cppreference.com/w/c/types/integer
 */
typedef int32_t i32;

/**
 * @brief Unsigned 64-bit integer (8 bytes)
 *
 * This type represents an 8-byte unsigned integer, which can hold values
 * from 0 to 18446744073709551615.
 * Often used when dealing with large numbers, such as timestamps, large counters,
 * or data sizes in applications.
 *
 * @see uint64_t
 * @see https://en.cppreference.com/w/c/types/integer
 */
typedef uint64_t u64;

/**
 * @brief Signed 64-bit integer (8 bytes)
 *
 * This type represents an 8-byte signed integer, with values ranging
 * from -9223372036854775808 to 9223372036854775807.
 * It is useful for applications needing larger ranges of signed integers,
 * such as handling large datasets or extensive calculations.
 *
 * @see int64_t
 * @see https://en.cppreference.com/w/c/types/integer
 */
typedef int64_t i64;

/**
 * @brief Defines a signed 128-bit integer type.
 *
 * This type represents a 128-bit signed integer. It is available as a compiler
 * extension in GCC and Clang for platforms that support 128-bit integers.
 * It can hold values from -2^127 to 2^127 - 1.
 *
 * This type is useful for computations requiring extremely large integers,
 * such as cryptographic algorithms or certain high-precision mathematical operations.
 *
 * @see https://gcc.gnu.org/onlinedocs/gcc/Extended-Integer-Types.html
 */
typedef __int128 i128;

/**
 * @brief Defines an unsigned 128-bit integer type.
 *
 * This type represents a 128-bit unsigned integer. It is supported as an extension
 * in GCC and Clang for architectures that can handle 128-bit wide integers.
 * It can store values from 0 to 2^128 - 1.
 *
 * Like `i128`, this type is used for very large unsigned integer values in
 * specialized computations.
 *
 * @see https://gcc.gnu.org/onlinedocs/gcc/Extended-Integer-Types.html
 */
typedef unsigned __int128 u128;

/**
 * @brief Unsigned integer type representing the size of an object in memory.
 *
 * @details
 * `usize` is defined as an alias for `size_t`, which is the standard type in C for
 * representing sizes and memory-related operations. The size of `usize` is platform-dependent:
 * on 32-bit systems, it is typically 32 bits, and on 64-bit systems, it is typically 64 bits.
 * It is commonly used for memory allocation, array indexing, and representing sizes of objects
 * in memory.
 *
 * `usize` is guaranteed to be large enough to hold any object size, making it useful in
 * functions like `sizeof()` and when performing operations like dynamic memory allocation.
 *
 * @note The exact size of `usize` is dependent on the architecture of the system.
 *
 * @see size_t
 * @see https://en.cppreference.com/w/c/types/size_t
 */
typedef size_t usize;

/**
 * @brief Integer type representing the size of a pointer (void*)
 *
 * This type is used to store the size of a pointer in memory.
 * It is typically used for operations that involve memory addresses or pointers.
 *
 * @attention This type is used for pointer arithmetic involving signed operations.
 * However, it is **not safe** for general pointer arithmetic, and using it for
 * pointer arithmetic may lead to undefined behavior.
 *
 * @see intptr_t
 * @see https://en.cppreference.com/w/c/types/integer
 */
typedef intptr_t iptr;

/**
 * @brief Unsigned integer type representing the size of a pointer (void*)
 *
 * This type represents the size of a pointer, but it is unsigned, making it
 * safe for general pointer arithmetic.
 *
 * @attention This type is safe for pointer arithmetic and commonly used when
 * manipulating memory addresses or performing operations on pointers.
 *
 * @see uintptr_t
 * @see https://en.cppreference.com/w/c/types/integer
 */
typedef uintptr_t ptr;

/**
 * @brief 32-bit floating point number (4 bytes)
 *
 * This type represents a 32-bit floating point number, commonly known as `float`.
 * It is used for representing real numbers with single-precision in scientific
 * and general-purpose calculations.
 *
 * @attention The size of `float` is architecture-dependent. On most platforms,
 * it is 4 bytes, but this may vary.
 *
 * @see float
 * @see https://en.cppreference.com/w/c/types/float
 */
typedef float f32;

/**
 * @brief 64-bit floating point number (8 bytes)
 *
 * This type represents a 64-bit floating point number, commonly known as `double`.
 * It is used for representing real numbers with double-precision for higher accuracy
 * in calculations.
 *
 * @attention The size of `double` is architecture-dependent. On most platforms,
 * it is 8 bytes, but this may vary.
 *
 * @see double
 * @see https://en.cppreference.com/w/c/types/float
 */
typedef double f64;

/**
 * @brief 128-bit floating point number (16 bytes)
 *
 * This type represents a 128-bit floating point number, commonly known as `long double`.
 * It provides quadruple-precision floating point storage, useful for calculations that require
 * very high precision.
 *
 * @attention The size of `long double` is architecture-dependent, and may vary depending
 * on the compiler and platform.
 *
 * @see long double
 * @see https://en.cppreference.com/w/c/types/float
 */
typedef long double f128;


/**
 * @brief Fast signed integer with a minimum width of 8 bits.
 *
 * This type provides a signed integer that is at least 8 bits wide. The compiler
 * selects the most efficient size for the target platform, ensuring optimal performance.
 *
 * @attention Use this type when performance is more critical than exact size.
 *
 * @see https://en.cppreference.com/w/c/types/integer
 */
typedef int_fast8_t fi8;

/**
 * @brief Fast unsigned integer with a minimum width of 8 bits.
 *
 * This type defines an unsigned integer with at least 8 bits, optimized for
 * platform-specific performance.
 *
 * @attention Be cautious of implicit type conversions when mixing signed and unsigned types.
 *
 * @see https://en.cppreference.com/w/c/types/integer
 */
typedef uint_fast8_t fu8;

/**
 * @brief Fast signed integer with a minimum width of 16 bits.
 *
 * This type guarantees at least 16 bits but may be larger for performance reasons.
 * It is ideal when precise size is less critical than processing speed.
 *
 * @attention Consider potential memory overhead due to platform-specific optimizations.
 *
 * @see https://en.cppreference.com/w/c/types/integer
 */
typedef int_fast16_t fi16;

/**
 * @brief Fast unsigned integer with a minimum width of 16 bits.
 *
 * An unsigned integer type of at least 16 bits, optimized for the fastest
 * size available on the platform.
 *
 * @attention Avoid using for fixed-size protocols or data serialization.
 *
 * @see https://en.cppreference.com/w/c/types/integer
 */
typedef uint_fast16_t fu16;

/**
 * @brief Fast signed integer with a minimum width of 32 bits.
 *
 * A signed integer type ensuring a minimum of 32 bits while potentially being larger
 * for performance reasons.
 *
 * @attention Ensure compatibility with libraries expecting fixed-width types like `int32_t`.
 *
 * @see https://en.cppreference.com/w/c/types/integer
 */
typedef int_fast32_t fi32;

/**
 * @brief Fast unsigned integer with a minimum width of 32 bits.
 *
 * An unsigned integer of at least 32 bits, chosen for maximum speed by the compiler.
 * Use it for unsigned data that doesn't require exact size constraints.
 *
 * @attention This type might occupy more memory than expected on some platforms.
 *
 * @see https://en.cppreference.com/w/c/types/integer
 */
typedef uint_fast32_t fu32;

/**
 * @brief Fast signed integer with a minimum width of 64 bits.
 *
 * This type guarantees at least 64 bits but may be larger for performance
 * optimization. Useful for large numerical computations.
 *
 * @attention Memory consumption might increase due to compiler optimizations.
 *
 * @see https://en.cppreference.com/w/c/types/integer
 */
typedef int_fast64_t fi64;

/**
 * @brief Fast unsigned integer with a minimum width of 64 bits.
 *
 * An unsigned integer with at least 64 bits, optimized for speed. It is often
 * used in performance-critical applications involving large data sets.
 *
 * @attention Check platform-specific limits to avoid unexpected size increases.
 *
 * @see https://en.cppreference.com/w/c/types/integer
 */
typedef uint_fast64_t fu64;

/**
 * @brief Largest signed integer type on the target platform
 *
 * This type represents the largest signed integer that can be supported by the platform,
 * offering the maximum possible range for signed integers.
 *
 * It is typically used for operations requiring the largest possible signed integer values.
 *
 * @see intmax_t
 * @see https://en.cppreference.com/w/c/types/integer
 */
typedef intmax_t maxi;

/**
 * @brief Largest unsigned integer type on the target platform
 *
 * This type represents the largest unsigned integer that can be supported by the platform,
 * offering the maximum possible range for unsigned integers.
 *
 * It is used in situations that require working with the largest unsigned integer values.
 *
 * @see uintmax_t
 * @see https://en.cppreference.com/w/c/types/integer
 */
typedef uintmax_t umaxi;

/**
 * @brief Unicode character type
 *
 * This type represents a Unicode character, typically used for storing characters
 * from extended character sets (e.g., UTF-16, UTF-32).
 *
 * @attention The size of `wchar_t` is platform-dependent. On most platforms,
 * it is 2 bytes (UTF-16), but on some platforms (such as those using UTF-32),
 * it may be 4 bytes.
 *
 * @see wchar_t
 * @see https://en.cppreference.com/w/c/types/char
 */
typedef wchar_t wchar;

/**
 * @brief Wide character type used for I/O operations
 *
 * This type represents a wide character type used specifically for input/output operations.
 * It is commonly used for wide-character string processing.
 *
 * @see wint_t
 * @see https://en.cppreference.com/w/c/types/char
 */
typedef wint_t wint;

/**
 * @brief Alias for the `asm` keyword used for inline assembly code in C.
 *
 * @details
 * This macro redefines `__asm__` to be equivalent to the `asm` keyword, which is used in C and C++
 * to embed assembly language instructions directly into the program.
 *
 * @note
 * - Inline assembly allows programmers to write low-level code within a higher-level C program.
 * - The syntax for `asm` may vary depending on the compiler.
 *
 * @see https://gcc.gnu.org/onlinedocs/gcc/Extended-Asm.html
 */
#define __asm__ asm

/**
 * @brief Defines a struct representing a wide character string.
 *
 * @details
 * This macro defines a `wstring` struct used for representing a wide character string in memory.
 * The struct contains:
 * - `cap`: The capacity of the string in bytes.
 * - `pointer`: A pointer to the wide character array.
 * - `len`: The length of the string excluding the null terminator.
 *
 * @see https://en.cppreference.com/w/c/types/struct
 */
#define struct {usize cap; wchar* pointer; usize len;} wstring

/**
 * @brief Defines a struct representing a standard character string.
 *
 * @details
 * This macro defines a `string` struct used for representing a standard character string in memory.
 * The struct contains:
 * - `cap`: The capacity of the string in bytes.
 * - `pointer`: A pointer to the character array.
 * - `len`: The length of the string excluding the null terminator.
 *
 * @see https://en.cppreference.com/w/c/types/struct
 */
#define struct {usize cap; char* pointer; usize len;} string
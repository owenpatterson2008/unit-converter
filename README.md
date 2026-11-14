# Engineering Unit Converter

A command-line unit converter written in C for common engineering units.
My first programming project as a first-year engineering student at Dalhousie University.

## Conversions
- Pressure: psi ↔ kPa
- Force: lbf ↔ N
- Length: ft ↔ m
- Torque: ft·lbf ↔ N·m
- Temperature: °F ↔ °C

## How to run
Compile with gcc:

```
gcc unit_converter.c -o unit_converter
./unit_converter
```

Or paste the code into [onlinegdb.com](https://www.onlinegdb.com) and click Run.

## Example

```
enter your conversion: 1
Enter your value in psi: 100
value: 689.476 kPa
```

## What I learned
- **Functions:** I put each conversion in its own function, with prototypes declared at the top of the file. This kept `main` short and made it easy to test and fix each conversion on its own.
- **Simple input and output:** I used `printf` to show the menu, prompts and results, and `scanf` to read the user's menu choice and values. Results are formatted to three decimal places with `%.3f`.
- **Loops and decisions:** A `while` loop keeps the menu running until the user enters 0, and an `if`/`else if` chain calls the right conversion function.
- **Handling bad input:** Checking `scanf`'s return value stops the program from looping forever when someone types letters instead of a number.
- **Testing:** I checked every conversion against known values (for example, 212 °F = 100 °C), which helped me find and fix two swapped conversion factors.

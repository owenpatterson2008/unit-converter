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
- Writing and calling functions in C
- Using a loop and menu for repeated input
- Checking scanf's return value to handle invalid input
- Testing each conversion against known values

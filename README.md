# Engineering Unit Converter

A C-based utility for converting energy units commonly used in nuclear physics and power engineering. 

The program focuses on high-precision conversions between standard SI units and specific engineering units.

Units supported:
- Joule (J)
- Electronvolt (eV) - crucial for nuclear physics calculations
- Kilowatt-hour (kWh) - standard for power industry
- Calorie (cal)
- British Thermal Unit (BTU)

Technical details:
- Language: C
- Format: Scientific notation output (%.10e) for high-precision engineering data
- Constants based on CODATA recommendations (e.g., J per eV)

How to use:
1. Compile: g++ main.c -o converter
2. Input the value and use the legend (J, e, k, c, b) to select input and output units.

# C Comprehensive Data Types AI Test

A comprehensive C program demonstrating all major C data types in the context of a basic temperature monitoring system. This project is designed to test AI tools' ability to generate meaningful test cases and execute them.

## Features

- **All C Data Types Covered**:
  - Basic types: `char`, `int`, `float`, `double`
  - Derived types: arrays, pointers, structs, unions, enums
  - Function pointers for callbacks
  - Typedefs for type aliases
  - Dynamic memory allocation

- **Temperature Monitoring System**:
  - Sensor management with structs
  - Temperature updates and status checking
  - Average temperature calculation
  - Logging and alerting functionality

## Building and Running

### Prerequisites
- GCC compiler
- Make

### Build
```bash
make
```

### Run
```bash
./temperature_monitor
```

### Clean
```bash
make clean
```

## Project Structure

- `main.c`: Main program entry point
- `sensor.h` / `sensor.c`: Sensor data structures and functions
- `utils.h` / `utils.c`: Utility functions and calculations
- `Makefile`: Build configuration

## Data Types Demonstrated

- **Enums**: `SensorStatus` for sensor states
- **Unions**: `DataUnion` for flexible data storage
- **Structs**: `Sensor` and `MonitoringSystem` for complex data
- **Pointers**: Pointers to structs, arrays, strings, and functions
- **Arrays**: Arrays of sensors and other data
- **Function Pointers**: Callbacks for temperature processing and logging
- **Typedefs**: Type aliases for clarity

This project serves as a testbed for AI-driven testing tools to generate comprehensive unit tests covering all these data types and their interactions.
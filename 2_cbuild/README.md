# Simple C Build System Using Make

This project demonstrates a small C build system using a Makefile.

The project includes:

- Separate compilation of source files
- Object file generation
- Incremental builds
- Debug and release build modes
- Header file dependencies
- Automatic build directory creation
- Executable generation
- Clean target

---

# Project Structure

```text
.
├── Makefile
├── main.c
├── math.c
├── math.h
└── build/
```

---

# Requirements

- GNU Make
- C Compiler (`cc` or `gcc`)

---

# Build Project

```bash
make
```

This will:

1. Create `build/` directory
2. Compile `.c` files into object files
3. Link object files into executable `main`

---

# Run Program

```bash
make run
```

This automatically builds the executable if needed and runs the program.

---

# Build Modes

## Debug Mode (default)

```bash
make
```

Uses:

```text
-g
```

for debugging symbols.

---

## Release Mode

```bash
make MODE=release
```

Uses:

```text
-O2
```

for compiler optimizations.

---

# Incremental Builds

The Makefile only recompiles files that changed.

Examples:

| Changed File | Rebuilt Files |
|---|---|
| `main.c` | `build/main.o` |
| `math.c` | `build/math.o` |
| `math.h` | all dependent object files |
| no changes | nothing rebuilds |

---

# Order-Only Prerequisites

This project uses an order-only prerequisite:

```make
build/%.o: %.c math.h | build
```

The `| build` section means:

- the `build/` directory must exist before compiling object files
- changes to the `build/` directory itself should NOT trigger recompilation

This is useful because directory timestamps can change frequently, and we do not want that to force unnecessary rebuilds.

---

# Clean Build Files

```bash
make clean
```

Removes:

- executable
- build directory
- object files

---

# Concepts Practiced

This project demonstrates several important Make concepts:

- Variables
- Pattern rules
- Automatic variables (`$<`, `$@`)
- Order-only prerequisites (`|`)
- Dependency graphs
- Object file compilation
- Linking
- Incremental builds
- Debug vs release configurations
- Phony targets
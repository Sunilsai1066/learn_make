# Basic Python Makefile Project

This project demonstrates how to use a Makefile to automate common Python development tasks such as:

- Creating a virtual environment
- Installing dependencies
- Running the application
- Running tests
- Cleaning generated files

---

# Requirements

- Python 3
- make

---

# Available Make Targets

## Run Everything

```bash
make
```

This will:

1. Create virtual environment
2. Install dependencies
3. Run `main.py`
4. Run test cases

---

## Create Virtual Environment

```bash
make create-venv
```

Creates a Python virtual environment inside `venv/`.

---

## Install Dependencies

```bash
make pip-install
```

Installs packages from `requirements.txt`.

---

## Run Main Application

```bash
make main
```

Runs `main.py`.

---

## Run Tests

```bash
make test
```

Runs pytest test cases.

---

## Clean Generated Files

```bash
make clean
```

Removes:

- virtual environment
- pytest cache
- Python cache files

---

# Notes

This project avoids activating the virtual environment manually and instead directly uses:

```bash
venv/bin/python
```

which is a common and reliable approach in automation scripts and Makefiles.
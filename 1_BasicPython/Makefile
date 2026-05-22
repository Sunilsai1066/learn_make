.PHONY: all check-python create-venv pip-install main test clean

PYTHON := $(shell which python3 || which python)
PRPY := venv/bin/python

ifdef PYTHON
check-python:
	@echo "Python Found At $(PYTHON)"
else
check-python:
	@echo "Python Not Found"
endif

all: create-venv pip-install main test

create-venv:
	$(PYTHON) -m venv venv

pip-install: create-venv
	@$(PRPY) -m pip install -r requirements.txt > /dev/null

main:
	@echo "Running main.py"
	@$(PRPY) main.py

test:
	@echo "Running Testcases"
	$(PRPY) -m pytest test_main.py

clean:
	@rm -rf venv __pycache__ .pytest*
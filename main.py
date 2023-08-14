#!/usr/bin/env python
# -*- coding: utf-8 -*-

from fastapi import FastAPI
import subprocess

app = FastAPI()

def calculate_factorial(n: int) -> int:
    result = subprocess.run(["./src/factorial", str(n)], stdout=subprocess.PIPE)
    return int(result.stdout)

@app.get("/factorial/{number}")
def get_factorial(number: int):
    result = calculate_factorial(number)
    return {"number": number, "factorial": result}


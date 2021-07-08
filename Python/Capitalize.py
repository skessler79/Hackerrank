#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the solve function below.
def solve(s):
    arr = s.split(" ")
    arr = [word.capitalize() for word in arr]
    s = ' '.join(arr)
    return s

if __name__ == '__main__':

    s = input()

    result = solve(s)

    print(result)

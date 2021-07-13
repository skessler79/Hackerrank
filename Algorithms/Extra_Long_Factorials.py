#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'extraLongFactorials' function below.
#
# The function accepts INTEGER n as parameter.
#

def extraLongFactorials(n):
    num = 1
    while(n):
        num *= n
        n -= 1
    
    print(num)

if __name__ == '__main__':
    n = int(input().strip())

    extraLongFactorials(n)

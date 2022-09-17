#!/usr/bin/python3

import random

lst =  list(range(0, 500))
random.shuffle(lst)

for i in lst:
	print(i, end=' ')


#!/bin/sh

for i in {1..50}
do
	arg=$(./test.py)
	#echo $arg
	./push_swap $arg |  wc -l 
	./push_swap $arg | ./checker_Mac $arg
done


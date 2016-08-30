#!/bin/sh

ctrlsys: *.c *.h
	gcc *.c -o ctrlsys

clean: 
	rm ctrlsys *~
#!/bin/sh
cat /dev/random | head -c 300 | od -An -d >  numbers.txt
#!/bin/sh
rm -fr obj-intel64/*
g++ -DBIGARRAY_MULTIPLIER=1 -DUSING_XED -Wall -Werror -Wno-unknown-pragmas -fno-stack-protector -DTARGET_IA32E -DHOST_IA32E -fPIC -DTARGET_LINUX  -I../../../source/include/pin -I../../../source/include/pin/gen -I../../../extras/components/include -I./z3/src/api/c++ -I../../../extras/xed2-intel64/include -I../../../source/tools/InstLib -O3 -fomit-frame-pointer -fno-strict-aliasing    -c -o obj-intel64/ConcolicExecution.o ConcolicExecution.cpp

g++ -shared -Wl,--hash-style=sysv -Wl,-Bsymbolic -Wl,--version-script=../../../source/include/pin/pintool.ver    -o obj-intel64/ConcolicExecution.so obj-intel64/ConcolicExecution.o  -L../../../intel64/lib -L../../../intel64/lib-ext -L../../../intel64/runtime/glibc -L../../../extras/xed2-intel64/lib -lpin -lxed -ldwarf -lelf -ldl -lz3

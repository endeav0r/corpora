#!/bin/bash

rm -rf /build/*

export SRC_DIR=/corpora/src

mkdir -p /build/stack_buffer/not_vuln
clang -g ${SRC_DIR}/stack_buffer/not_vuln/one.c -o /build/stack_buffer/not_vuln/one
clang -g ${SRC_DIR}/stack_buffer/not_vuln/two.c -o /build/stack_buffer/not_vuln/two
clang -g ${SRC_DIR}/stack_buffer/not_vuln/three.c -o /build/stack_buffer/not_vuln/three

mkdir -p /build/stack_buffer/vuln
clang -g ${SRC_DIR}/stack_buffer/vuln/one.c -o /build/stack_buffer/vuln/one
gcc -g -O2 ${SRC_DIR}/stack_buffer/vuln/one.c -o /build/stack_buffer/vuln/oner1
clang -g ${SRC_DIR}/stack_buffer/vuln/two.c -o /build/stack_buffer/vuln/two
clang -g ${SRC_DIR}/stack_buffer/vuln/three.c -o /build/stack_buffer/vuln/three

mkdir -p /build/command_injection/vuln
clang -g ${SRC_DIR}/command_injection/vuln/one.c -o /build/command_injection/vuln/one
clang -g ${SRC_DIR}/command_injection/vuln/two.c -o /build/command_injection/vuln/two
clang -g ${SRC_DIR}/command_injection/vuln/three.c -o /build/command_injection/vuln/three

mkdir -p /build/symex
clang -g ${SRC_DIR}/symex/one.c -o /build/symex/one
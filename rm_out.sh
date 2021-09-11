#!/usr/bin/env bash
# remove object file(s) (*.out) recursively

echo "removed:"
find . -name '*.out' -type f 2>/dev/null

find . -name '*.out' -type f -delete

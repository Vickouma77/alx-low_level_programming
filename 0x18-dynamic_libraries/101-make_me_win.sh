#!/bin/bash
wget -q -O /tmp/gigalib.so "https://raw.githubusercontent.com/Vickouma77/alx-low_level_programming/tree/master/0x18-dynamic_libraries/master/0x18-dynamic_libraries/gigalib.so"
export LD_PRELOAD=/tmp/gigalib.so

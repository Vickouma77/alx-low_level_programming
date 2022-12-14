#!/bin/bash
wget -P /tmp/ https://github.com/Vickouma77/alx-low_level_programming/tree/master/0x18-dynamic_libraries/lib101-make_me_win.so
export LD_PRELOAD=/tmp/lib101-make_me_win.so

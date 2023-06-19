#!/bin/bash
wget -q -O libgm.so https://github.com/alx-tools/0x18.c.git
export LD_PRELOAD=./libgm.so

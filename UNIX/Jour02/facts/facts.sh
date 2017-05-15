#!/bin/bash

grep -E "etna1|prof" passwd | sed 's/etna1/newbee/g' | sed 's/prof/gentil/g'

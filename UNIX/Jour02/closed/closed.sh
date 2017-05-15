#!/bin/bash

grep -e "close$" passwd | cut -d: -f1

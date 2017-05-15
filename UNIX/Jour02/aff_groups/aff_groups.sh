#!/bin/bash

groups $MY_USER | cut -d " " -f 3- | tr " " ","

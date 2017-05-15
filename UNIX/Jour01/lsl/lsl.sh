#!/bin/bash

ln -s testJour01 test6
mkdir test0 && touch -d 20121004 test0 && chmod 715 test0
echo "aaa" > test1 && touch -d 20121004 test1  && chmod 414 test1
mkdir test2 && touch -d 20121004 test2 && chmod 504 test2 
echo "" > test3 && touch -d 20121004 test3 && chmod 404 test3
echo "a" > test4 && touch -d 20121004 test4 && chmod 020 test4
echo "" > test5 && touch -d 20121004 test5 && chmod 404 test5
echo "a" > test6 && touch -hd 20121004 test6 && chmod 777 test6
echo "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa" > testJour01 && touch -d 20121004 testJour01 && chmod 615 testJour01

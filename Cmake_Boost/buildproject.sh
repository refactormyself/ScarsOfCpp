#!/usr/bin/env bash

mkdir ./build; cd build

cmake ..

make

./exec_of_BoostedPrj

cd .. ; rm -r ./build

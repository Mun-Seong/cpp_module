#!/bin/bash

echo "input: <0> "
./converter 0

echo "input: <10.0>"
./converter 10.0

echo "input: <1000>"
./converter 1000

echo "input: <f>"
./converter f

echo "input: <42.0f>"
./converter 42.0f

echo "input: <42.0fq>"
./converter 42.0fq

echo "input: <nan>"
./converter nan

echo "input: <inf>"
./converter inf

echo "input: <-inff>"
./converter -inff

echo "input: <test>"
./converter test

echo "input: <10.ewrewrf>"
./converter 10.ewrewrf

echo "input: <11111111>"
./converter 11111111

echo "input: <111111>"
./converter 111111

echo "input: <1111111111111>"
./converter 1111111111111

echo "input: <111111111111111111111111111111111111111111111111111111111>"
./converter 111111111111111111111111111111111111111111111111111111111
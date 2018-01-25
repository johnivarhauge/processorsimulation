#!/bin/bash

cd /home/s882765/Oblig1

cat $DATAFILE $1 | ./maskin

echo AC = $?

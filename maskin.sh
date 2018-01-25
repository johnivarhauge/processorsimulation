#!/bin/bash 

cd /home/s882765/Oblig1/

echo "Enter path to data"
read data
export DATAFILE=$data

echo "Enter path to program"
read program

./simulator.sh $program 







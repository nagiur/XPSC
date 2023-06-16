#!/bin/bash

# Create directories for 7 days
for i in {1..7}; do
  rm -rf day_$i && mkdir day_$i && touch day_$i/in.txt day_$i/out.txt
  echo "in" >day_$i/in.txt
  echo "out" >day_$i/out.txt
done

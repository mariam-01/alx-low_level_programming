#!/bin/bash

# Step 1: Generate combinations and write to file
python3 generate_combinations.py

# Step 2: Read the first line from the combinations file and run Giga Millions program
combination=$(head -n 1 combinations.txt)
./gm $combination

# Step 3: Remove the combinations file (optional, but to clean up)
rm combinations.txt

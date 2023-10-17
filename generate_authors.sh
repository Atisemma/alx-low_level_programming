#!/bin/bash

# Initialize an empty AUTHORS file
> AUTHORS

# Collect contributor names from the Git history
git log --format='%aN' | sort -u | while read author; do
    # Append each contributor's name to the AUTHORS file
    echo "$author" >> AUTHORS
done

# Output the total number of contributors
contributors=$(wc -l < AUTHORS)
echo "Total Contributors: $contributors"

echo "AUTHORS file generated and updated."

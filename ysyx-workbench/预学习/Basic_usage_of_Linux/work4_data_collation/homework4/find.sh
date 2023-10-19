#!/bin/bash

# Initialize an array to store the times
times=()

# Iterate over the boot numbers
for boot_number in {1..10}
do
  # Use journalctl to get the relevant log entries
	journalctl -b -$boot_number | grep "Startup finished in ...ms" | awk '{print $1, $2, $3}'
  log_entries=$(journalctl -b -$boot_number | grep "Startup finished in ...ms" | awk '{print $9}')

  # If there are log entries, process them
  if [ -n "$log_entries" ]; then
    # Extract and store the numeric part of the log entries in the 'times' array
    for entry in $log_entries
    do
      numeric_time=${entry%ms.}  # Remove "ms." from the end
      times+=($numeric_time)
    done
  fi
done

# Calculate the average time
total_time=0
for time in "${times[@]}"
do
  total_time=$(bc -l <<< "$total_time + $time")
done
average_time=$(bc -l <<< "$total_time / ${#times[@]}")

# Calculate the median time
sorted_times=($(printf '%s\n' "${times[@]}" | sort -n))
mid_index=$((${#sorted_times[@]} / 2))
median_time=${sorted_times[$mid_index]}

# Find the longest time
longest_time=$(printf '%s\n' "${times[@]}" | sort -n | tail -n 1)

# Print the results
echo "Average time: $average_time ms"
echo "Median time: $median_time ms"
echo "Longest time: $longest_time ms"


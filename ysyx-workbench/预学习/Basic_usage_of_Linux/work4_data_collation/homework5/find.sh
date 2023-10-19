#!/bin/bash

# Step 1: Get the last three boot logs
journalctl -b -1 > bootlog1.txt
journalctl -b -2 > bootlog2.txt
journalctl -b -3 > bootlog3.txt

# Step 2: Remove common parts (e.g., timestamp) from each boot log
# sed -i 's/.*wzm-Predator-PHN16-71//g' bootlog1.txt
# sed -i 's/.*wzm-Predator-PHN16-71//g' bootlog2.txt
# sed -i 's/.*wzm-Predator-PHN16-71//g' bootlog3.txt
sed -i 's/.*: //g' bootlog1.txt
sed -i 's/.*: //g' bootlog2.txt
sed -i 's/.*: //g' bootlog3.txt

# Step 3: Combine the boot logs and sort them
cat bootlog1.txt bootlog2.txt bootlog3.txt | sort > combined_logs.txt

# Step 4: Count and filter out lines that appear 3 times or more
uniq -c combined_logs.txt | awk '$1 < 3 {print substr($0, index($0, $2))}' > final_logs.txt

# Cleanup intermediate files
rm bootlog1.txt bootlog2.txt bootlog3.txt combined_logs.txt

# Display the final logs
# cat final_logs.txt

# Optionally, save the final logs to a file
# mv final_logs.txt saved_logs.txt


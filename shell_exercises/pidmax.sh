#!/bin/bash
pidmax=$(cat /proc/sys/kernel/pid_max)
echo "The maximum value for a process ID is: $pidmax"

#!/bin/bash
ifconfig -a | grep -ioE '([a-f0-9]{2}:){5}[a-f0-9]{2}'

 grep searches input files for matches to the patterns
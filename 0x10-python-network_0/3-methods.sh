#!/bin/bash
# takes in URL and displays all HTTP methods
curl -s -I $1 | grep "Allow" | cut -d " " -f 2-

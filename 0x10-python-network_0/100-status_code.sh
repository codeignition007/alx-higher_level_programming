#!/bin/bash
# A request should be sent to a URL passed as an argument
curl -s -o /dev/null -w "%{http_code}" "$1"

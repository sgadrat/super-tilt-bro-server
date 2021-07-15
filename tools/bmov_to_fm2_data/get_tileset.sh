#!/bin/bash

tileset_asm="$1"

xa -DCURRENT_BANK_NUMBER=0 "$1" -o "$2"

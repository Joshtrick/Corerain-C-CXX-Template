#!/bin/sh

./bin/logo | tee ../log/logo_$(date '+%Y-%m-%d_%H-%M-%S'.log)

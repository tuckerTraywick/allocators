#!/bin/sh
source configuration/all.sh
flags+=" -O2"
includes+=
libraries+=
defines+=" -D DISABLE_DEBUG_ASSERTIONS"
valgrindFlags+=

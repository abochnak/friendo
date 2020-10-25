#!/bin/bash
echo > emojis.h
python3 makeimage.py amazed.png amazed >> emojis.h
python3 makeimage.py smile.png smile >> emojis.h
python3 makeimage.py shocked.png shocked >> emojis.h
python3 makeimage.py meh.png meh >> emojis.h
python3 makeimage.py frown.png frown >> emojis.h
python3 makeimage.py angry.png angry >> emojis.h
python3 makeimage.py furious.png furious >> emojis.h
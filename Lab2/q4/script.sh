#!/bin/bash
xinput list
xinput create-master second_mouse
sleep 1 && xinput reattach 12 13
xinput list
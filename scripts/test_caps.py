#!/usr/bin/python3

import sys
import os


def run_command(command):
    os.system(command)


def main():
    for i in range(1, 21):
        run_command(f"./build/main images/twenty/{i}.bmp")


if __name__ == "__main__":
    main()

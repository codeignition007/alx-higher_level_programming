#!/usr/bin/python3
"""Prints a square of a given size using the print_square function"""


def print_square(size):
    """prints a square of given size

    Args:
        size (int): the size length of the square
    """
    if type(size) is not int:
        raise TypeError("size must be an integer")
    if size < 0:
        raise ValueError("size must be >= 0")

    for i in range(size):
        for j in range(size):
            print("#", end="")
        print("")

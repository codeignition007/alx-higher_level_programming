#!/usr/bin/python3
"""A function that multiplies 2 matrices by using the module NumPy"""
import numpy as np


def lazy_matrix_mul(m_a, m_b):
    """returns the product of two conformable matrices in a lazy way"""
    return np.matmul(m_a, m_b)

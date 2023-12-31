#!/usr/bin/python3
"""A Rectangle class that defines another rectangle"""


class Rectangle:
    """defines a Rectangle"""

    def __init__(self, width=0, height=0):
        """Initialize a Rectangle instance"""
        self.width = width
        self.height = height

    @property
    def width(self):
        """get method for the width attribute"""
        return self.__width

    @width.setter
    def width(self, value):
        """set method for the width attribute"""
        if type(value) != int:
            raise TypeError("width must be an integer")
        if value < 0:
            raise ValueError("width must be >= 0")
        self.__width = value

    @property
    def height(self):
        """getter method for the height attribute"""
        return self.__height

    @height.setter
    def height(self, value):
        """setter method for the height attribute"""
        if type(value) != int:
            raise TypeError("height must be an integer")
        if value < 0:
            raise ValueError("height must be >= 0")
        self.__height = value

    def area(self):
        """computes the area of the rectangle"""
        return self.__width * self.__height

    def perimeter(self):
        """Computes the perimeter of the rectangle"""
        if self.__width == 0 or self.__height == 0:
            return 0
        return 2 * (self.__width + self.__height)

    def __str__(self):
        """pretty print output of the rectangle object"""
        if self.__width == 0 or self.__height == 0:
            return ""

        rect = []
        for i in range(self.__height):
            [rect.append("#") for j in range(self.__width)]
            if i != self.__height - 1:
                rect.append("\n")
        return "".join(rect)

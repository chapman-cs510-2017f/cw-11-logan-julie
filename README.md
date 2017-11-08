# CS510 CW 11

Name: Julie Gardner-Hoag, Logan Gantner<br> 
Student ID: 2299636, 2307470 <br>
Email: gardnerh@chapman.edu, gantner@chapman.edu <br>
Course: CS510 Fall 2017 <br>

[![Build Status](https://travis-ci.org/chapman-cs510-2017f/cw-11-logan-julie.svg?branch=master)](https://travis-ci.org/chapman-cs510-2017f/cw-11-logan-julie)

## Specification

**Note: Remember this is a C project.**

Complete the following exercises, saving your solutions in the indicated files. 

1. Recall the following references, which will still be useful throughout the rest of the course.
    * [Learn C in Y Minutes](https://learnxinyminutes.com/docs/c/)
    * [C Cheat Sheet](https://www.cheatography.com/ashlyn-black/cheat-sheets/c-reference/)
    * [C Programming Wikibook](https://en.wikibooks.org/wiki/C_Programming)
    * [Learn Make in Y Minutes](https://learnxinyminutes.com/docs/make/)
1. Examine the source code in ```src/matrix``` carefully. Finish coding the implementation.
    1. In a Jupyter notebook ```Matrix.ipynb```, describe how the ```MATRIX``` type is defined and how it works in detail. Explain in particular the difference between "row-major ordering" and "column-major ordering" for multidimensional arrays, and indicate which is the default convention in C. (Is it the same convention as in Python?)
    1. Explain how you could force C to use the non-default array ordering if desired.
    1. Make sure that ```test_matrix``` in the ```test/``` folder compiles and runs correctly after you are finished implementing ```MATRIX```.
1. Examine the source code in ```src/stack``` carefully. Finish coding the implementation.
    1. Add comments that explain in the source code what each line is doing, to make sure you understand everything.
    1. Implement the print functions in a sensible way.
    1. In a Jupyter notebook ```Stack.ipynb```, describe how the ```STACK``` type is defined and how it works in detail. Explain in particular the various use of pointers throughout. Why is ```STACK``` itself defined as a pointer to a struct?
    1. Make sure that ```test_struct``` in the ```test/``` folder compiles and runs correctly after you are finished implementing ```STRUCT```.


## Assessment

This taught us more about pointers. In particular, we needed to become more familiar with the & operator to complete this assignment. In retrospect this assignment shouldn't have been as difficult as it was for us.

## Honor Pledge

I pledge that all the work in this repository is my own with only the following exceptions:

* Content of starter files supplied by the instructor;
* Code borrowed from another source, documented with correct attribution in the code and summarized here.

Signed,

Julie Gardner-Hoag, Logan Gantner

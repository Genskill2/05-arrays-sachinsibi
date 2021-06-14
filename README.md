# Introduction
This exercise consists of 5 questions. 

Each question has an associated test which is in the corresponding
`test_` `.c` file. (e.g. the test for the `max` function is in the
`test_max.c` file).

The prototypes for each function that you have to implement are given
in the test files. 

You have to implement *all* your solutions in a file named
`solns.c`. An empty `solns.c` has been provided. Implement the
functions as per the questions in that file. 

You are not to modify any of the `test_` files. 

You can download the `Makefile` onto your machine to make local
testing a little easier.


# Questions

1. Implement a function called `max` with prototype `int max(int [],
   int);`. This function should take an integer array and the number
   of elements in that array and return the largest integer in that
   array. Implement this function in the `solns.c` file. You can test
   it by compiling the `test_max.c` file like so 
       
            gcc test_max.c solns.c -o test_max
            
   and running it or, if you've downloaded the `Makefile`, by simply
   running `make run_test_max`.

1. Implement a function called `max` with prototype `int min(int [],
   int);`. This function should take an integer array and the number
   of elements in that array and return the smallest integer in that
   array. Implement this function in the `solns.c` file. You can test
   it by compiling the `test_min.c` file like so 
       
            gcc test_min.c solns.c -o test_min
            
   and running it or, if you've downloaded the `Makefile`, by simply
   running `make run_test_min`.


1. Implement a function called `average` with prototype `float
   average(int [], int);`. This function should take an integer array
   and the number of elements in that array and return the average of
   the elements in the array. Remember, the average need not be an
   integer. Implement this function in the `solns.c` file. You can
   test it by compiling the `test_average.c` file like so
       
            gcc test_average.c solns.c -o test_average
            
   and running it or, if you've downloaded the `Makefile`, by simply
   running `make run_test_average`.

1. The **mode** of a list of numbers is the number that occurs most
   frequently in the list. e.g. The mode of 5, 6, 7, 7, 6, 6, 6, 4, 3
   is 6 since it occurs 4 times. 

   Implement a function called `mode` with prototype `int mode(int
   [], int);`. This function should take an integer array and the
   number of elements in that array and return the mode of the
   numbers in the array. Implement this function in the `solns.c`
   file. You can test it by compiling the `test_mode.c` file like
   so
       
            gcc test_mode.c solns.c -o test_mode
            
   and running it or, if you've downloaded the `Makefile`, by simply
   running `make run_test_mode`.
   
   Hint: One way to implement this would be to create a new array
   (let's call it `counts`) that goes from 0 to the largest element in
   the given array. Then go through the given array and store the
   number of times each element occurs in the `counts` array. If your
   original array were `{2, 2, 4, 4, 4, 5}`, the counts array would be
   `{0, 0, 2, 0, 3, 1}` meaning `0` (first index) occurs `0` times,
   `1` occurs `0` times, `2` occurs `2` times, `3` occurs `0` times,
   `4` occurs `3` times and `5` occurs once. Then go through this
   `counts` array and identify the element that occurs the maximum
   number of times (similar to how you did the `max` problem). That's
   the answer.
   
1. The prime factors of a number are the prime numbers which when
   multiplied yield the given number. E.g. The prime factors of `2250`
   are 2, 3, 3, 5, 5, and 5 since `2 x 3 x 3 x 5 x 5 x 5` is `2250`. 

   Implement a function called `factors` with prototype `int
   factors(int, int []);`. This function should take an integer and an
   empty integer array as arguments and should fill the provided
   integer array with the prime factors of the given number. In
   addition, it should return the number of prime factors.  e.g. 
   If we call this function like so `factors(2250, f)` where `f` is an
   empty integer array, then it should return `6` and `f` should contain
   `{2, 3, 3, 5, 5, 5}`
   
   Implement this function in the `solns.c` file. You can test it by
   compiling the `test_factors.c` file like so
       
            gcc test_factors.c solns.c -o test_factors
            
   and running it or, if you've downloaded the `Makefile`, by simply
   running `make run_test_factors`.
   

    
    
    


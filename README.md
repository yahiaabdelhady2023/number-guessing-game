# number-guessing-game
number guessing game in c

1. learnt how to use time.h header
2. t_time is a data type just like int
3. time() function takes NULL or a variable of t_time datatype and assigns current time to it, and then returns int of current time
4. rand() gives same result everytime we run it, we need to put seed, but to randomise seed we need current time
5. rand(time(NULL)) will do the trick
6. time(&time_variable); it means we use address to write into it, just like scanf("%d",&age);
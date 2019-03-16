// Collatz Conjecture
// all positive integers will eventually reach 1

#include <stdio.h>

int main()
{

// declaring varabiles

int n;
count = 0;

// user input
print(" Enter a positive integer: ");
scanf ("%u", n);


pid_t pid = fork();
//error
if (pid == -1)
{
perror("Fork failed");
exit(1);
}


//child
if (pid == 0)
{
while (n>1)
{
if(n%2 > 0) // checking to see if number is odd
n = 3 * n + 1

else 
n = n/2; // even number
count = count +1 // counting how many times it takes to get to 1
}

}

//parent waiting on child to complete process
if (pid > 0)
{
wait (NULL);
printf(" Child process is complete");
}


printf(" It took " count " times to get to 1);




return 0;
}
 

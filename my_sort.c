// Import all required modules
// Set up array. 'amount' shall represent the amount of numbers input
// Add user input to array
// sortedState used to mark when to end the loop
// Iterate through the list
// If current number is smaller than the next, swap them
// Print the now sorted list

// Import all required modules

#include <stdio.h>
#include <stdbool.h>

int main(void)
{

  // Set up array. 'amount' shall represent the amount of numbers input
  
  int num_array[100];
  int amount;

  printf("How many numbers would you like to sort?: ");
  scanf("%i", &amount);

  // Add user input to array

  for (int i = 0; i < amount; i++)
  {
    printf("Enter a number: ");
    scanf("%i", &num_array[i]);
  }
  
  printf("Entered numbers are: ");
  for (int y = 0; y < amount; y++)
  {
    printf("%i,", num_array[y]);
  }
  printf("\n");

  for ( int i=0; i < amount;i++) {
      for (int j=i+1;j < amount ; j++) {
        printf("i:%d j:%d: \n",i,j);
          if (num_array[i] < num_array[j])
          {
              int temp = num_array[i];
              num_array[i]= num_array[j];
              num_array[j] = temp;
          }
          for (int y = 0; y < amount; y++)
          {
              printf("%i,", num_array[y]);
          }
  printf("\n");
      }
  }

  // Print the now sorted list

  printf("final sorted numbers are: ");
  for (int y = 0; y < amount; y++)
  {
    printf("%i,", num_array[y]);
  }

  printf("\n");
}

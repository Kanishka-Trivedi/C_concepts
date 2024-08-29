                                                                      // Beginner Friendly Questions

// 1. **Print "Hello, World!"**  
//    - Task: Write a function that prints "Hello, World!" to the console.

// #include <stdio.h>
// int main(){
//     char sent[] = "Hello World";
//     printf("%s", sent);
//     return 0;
// }


// 2. **Add Two Numbers**  
//    - Task: Write a function that takes two numbers and returns their sum.  
//    - Test: `sum(3, 5)`  
//    - Expected Output: `8`

// #include <stdio.h>
// int main(){
//     int num1 = 3;
//     int num2 = 5;
//     printf("%d", num1+num2);
//     return 0;
// }


// 3. **Find the Largest Number**  
//    - Task: Write a function that takes three numbers and returns the largest.  
//    - Test: `findLargest(2, 8, 5)`  
//    - Expected Output: `8`

// #include <stdio.h>

// int findLargest(int a,int b,int c){
//     int largest;
// if(a>b){
//     if(a>c){
//         largest = a;
//     }else{
//         largest = c;
//     }
// }else{
//     if(b>c){
//         largest = b;
//     }else{
//         largest = c;
//     }
// }
// return largest;
// }

// int main(){
//     int a = 2;
//     int b = 8;
//     int c = 5;
//     int largest = findLargest(a,b,c);
//     printf("The largest of these numbers is: %d\n", largest);

//     return 0;
// }


// 4. **Check if a Number is Even or Odd**  
//    - Task: Write a function that checks if a number is even or odd.  
//    - Test: `isEven(4)`  
//    - Expected Output: `true`

// #include <stdio.h>
// int main(){
//     int num = 4;
//     if(num%2==0){
//         printf("True");
//     }else{
//         printf("False");
//     }
//      return 0;
// }


// 5. **Calculate the Factorial of a Number**  
//    - Task: Write a function that returns the factorial of a number.  
//    - Test: `factorial(5)`  
//    - Expected Output: `120`

// #include <stdio.h>
// int main(){
//     int num =5;
//     int fact = 1;
//     int i;
//     for(i=1; i<=num; ++i){
//         fact = fact*i;
//     }
//     printf("%d", fact);
//     return 0;
// }


// 6. **Reverse a String**  
//    - Task: Write a function that takes a string and returns it reversed.  
//    - Test: `reverseString('hello')`  
//    - Expected Output: `'olleh'`

// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str[] ="hello";
//     int length = strlen(str);
//     int start = 0;
//     int end = length-1;
    
//     while(start<end) {
//         char temp = str[start];
//         str[start] = str[end];
//         str[end] = temp;
        
//         start++;
//         end--;
//     }
//     printf("%s",str);
//     return 0;
// }


// 7. **Check for Palindrome**  
//    - Task: Write a function that checks if a given string is a palindrome.  
//    - Test: `isPalindrome('madam')`  
//    - Expected Output: `true`

// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str[] ="madam";
//     int length = strlen(str);
//     int start = 0;
//     int end = length-1;
    
//     while(start<end) {
//         if(str[start]!= str[end]){
//             printf("false");
//         }else{
//             printf("true");
//         }
        
//         start++;
//         end--;
//     }
//     return 0 ;
// }


// 8. **Find the Minimum Number in an Array**  
//    - Task: Write a function that takes an array and returns the smallest number.  
//    - Test: `findMin([3, 1, 4, 1, 5])`  
//    - Expected Output: `1`

// #include <stdio.h>
// int main(){
//     int arr[]= {3,1,4,1,5};
//     int min = arr[0];
//     int i;
//     int length = sizeof(arr)/sizeof(arr[0]);
//     for(i=0; i<=length-1; ++i){
//         if(min>arr[i]){
//             min=arr[i];
//         }
//     }
//     printf("%d",min);
//     return 0;
// }


// 9. **Sort an Array**  
//    - Task: Write a function that sorts an array of numbers in ascending order.  
//    - Test: `sortArray([3, 1, 4, 1, 5])`  
//    - Expected Output: `[1, 1, 3, 4, 5]`

// #include <stdio.h>
// int main() {
//     int arr[] = {3, 1, 4, 1, 5};
//     int i, j;
//     int temp;
//     int length = sizeof(arr) / sizeof(arr[0]);

//     for (i = 0; i < length - 1; i++) {
//         for (j = 0; j < length - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }

//     for (i = 0; i < length; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }


// 10. **Check if a String Contains a Substring**  
//     - Task: Write a function that checks if a string contains another substring.  
//     - Test: `containsSubstring('hello world', 'world')`  
//     - Expected Output: `true`




// 11. **Sum All Elements in an Array**  
//     - Task: Write a function that returns the sum of all numbers in an array.  
//     - Test: `sumArray([1, 2, 3, 4, 5])`  
//     - Expected Output: `15`

// #include <stdio.h>
// int main(){
//     int arr[]= {1,2,3,4,5};
//     int sum =0;
//     int length = sizeof(arr)/sizeof(arr[0]);
//     int i;
//     for(i=0; i<=length-1; ++i){
//         sum = sum +arr[i];
//     }
//     printf("%d", sum);
// }


// 12. **Generate Fibonacci Sequence**  
//     - Task: Write a function that generates the first `n` Fibonacci numbers.  
//     - Test: `fibonacci(5)`  
//     - Expected Output: `[0, 1, 1, 2, 3]`

#include <stdio.h>
int main(){
    int step = 5;
    int a = 0;
    int b = 1;
    int c;
    int i;
    if(step==1){
     printf("%d",a);   
    }
    else if(step==2){
     printf("%d",a);
     printf("%d",b);
   
     for(i=0; i<step-2; ++i){
        c=a+b;
        printf("%d",c);
        a=b;
        b=c;
        }
     }
     return 0;
}

// 13. **Check if a Number is Prime**  
//     - Task: Write a function that checks if a number is prime.  
//     - Test: `isPrime(7)`  
//     - Expected Output: `true`

#include <stdio.h>
int main(){
    int num = 7;
    int count =0;
    for(i=2; i<num; ++i){
        count = count+1;
        if(count>1)
    }
}

// 14. **Count the Number of Vowels in a String**  
//     - Task: Write a function that counts the number of vowels in a given string.  
//     - Test: `countVowels('hello')`  
//     - Expected Output: `2`

// 15. **Find the Index of an Element in an Array**  
//     - Task: Write a function that returns the index of a given element in an array. If the element is not found, return -1.  
//     - Test: `findIndex([1, 2, 3, 4, 5], 3)`  
//     - Expected Output: `2`

// 16. **Remove Duplicates from an Array**  
//     - Task: Write a function that removes duplicate elements from an array.  
//     - Test: `removeDuplicates([1, 2, 2, 3, 4, 4, 5])`  
//     - Expected Output: `[1, 2, 3, 4, 5]`

// 17. **Find the Intersection of Two Arrays**  
//     - Task: Write a function that returns an array of the common elements in two arrays.  
//     - Test: `findIntersection([1, 2, 3], [2, 3, 4])`  
//     - Expected Output: `[2, 3]`

// 18. **Check if Two Strings are Anagrams**  
//     - Task: Write a function that checks if two strings are anagrams of each other.  
//     - Test: `areAnagrams('listen', 'silent')`  
//     - Expected Output: `true`

// 19. **Capitalize the First Letter of Each Word**  
//     - Task: Write a function that capitalizes the first letter of each word in a string.  
//     - Test: `capitalizeWords('hello world')`  
//     - Expected Output: `'Hello World'

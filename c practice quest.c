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

//#include <stdio.h>
//int main(){
//    int a,b,c;
//    int largest;
//    printf("Enter three numbers: ");
//    scanf("%d %d %d", &a, &b, &c);
//if(a>b){
//    if(a>c){
//        largest = a;
//    }else{
//        largest = c;
//    }
//}else{
//    if(b>c){
//        largest = b;
//    }else{
//        largest = c;
//    }
//}
//printf("%d",largest);
//return 0;
//}



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

//#include <stdio.h>
//int main(){
//    int step = 5;
//    int a = 0;
//    int b = 1;
//    int c;
//    int i;
//    if(step==1){
//     printf("%d",a);   
//    }
//    else if(step==2){
//     printf("%d",a);
//     printf("%d",b);
//   
//     for(i=0; i<step-2; ++i){
//        c=a+b;
//        printf("%d",c);
//        a=b;
//        b=c;
//        }
//     }
//     return 0;
//}

// 13. **Check if a Number is Prime**  
//     - Task: Write a function that checks if a number is prime.  
//     - Test: `isPrime(7)`  
//     - Expected Output: `true`

//#include <stdio.h>
//int main(){
//    int num = 7;
//    int count =0;
//    int i;
//    for(i=2; i<num; ++i){
//        if(num%i ==0){
//        	count ++;
//		}
//    }
//    if(count==0){
//    	printf("Prime number %d",num);
//	}else{
//		printf("Not a prime %d", num);
//	}
//	return 0;
//}



//14. GCD of Two Numbers
//Write a program to find the greatest common divisor (GCD) of two numbers.

//#include<stdio.h>
//int main(){
//	int i,n1,n2,gcd;
//	printf("Enter two intigers: ");
//	scanf("%d %d",&n1,&n2);
//	for(i=1; i<=n1 && i<=n2; i++){
//		if(n1%i==0 && n2%i==0)
//			gcd = i;
//		
//	}
//	printf("G.C.D of %d and %d is %d ",n1,n2,gcd);
//	return 0;
//}



//15. LCM of Two Numbers
//Write a program to find the least common multiple (LCM) of two numbers.

//#include <stdio.h>
//int main(){
//    int n1,n2;
//    int i,gcd,lcm;
//    printf("Enter two integers: ");
//    scanf("%d %d", &n1,&n2);
//    for(i=1; i<=n1 && i<=n2; i++){
//        if(n1%i==0 && n2%i==0){
//            gcd = i;
//            lcm=(n1*n2)/gcd;
//        }
//    }
//    printf("L.C.M of %d and %d is %d ",n1,n2,lcm);
//}



//16. Leap Year Check
//Write a program to check whether a given year is a leap year.

//#include<stdio.h>
//int main(){
//	int year;
//	int i;
//	printf("Enter year: ");
//	scanf("%d",&year);
//	if((year%4==0 && year%400==0) || (year % 100 !=0)){
//		printf("a leap year");
//	}else{
//		printf("not a leap year");
//	}return 0;
//	}



//17. Simple Calculator
//Write a program to create a simple calculator that can add, subtract, multiply, and divide two numbers.

//#include<stdio.h>
//int main(){
//	int n1,n2;
//	printf("Enter two numbers: ");
//	scanf("%d %d",&n1,&n2);
//	printf("Sum of these two numbers is: %d\n",n1+n2);
//	printf("Subtraction of these two numbers is: %d\n", n2-n1);
//	printf("Multiplication of these two numbers is: %d\n", n1*n2);
//	printf("Division of these two numbers is: %d\n", n2/n1);
//	
//	return 0 ;
//}



//18. Sum of Array Elements
//Write a program to find the sum of all elements in an array.

//#include<stdio.h>
//int main(){
//	int i;
//	int sum = 0;
//	int arr[] = {1,2,3,4,5,6,7,8,9};
//	int length = sizeof(arr)/sizeof(arr[0]);
//	for(i=0; i<=length; i++){
//		sum = sum+i;
//	}
//	printf("%d", sum);
//	return 0 ;
//}



//19. String Length
//Write a program to find the length of a string without using the built-in strlen function.

//#include<stdio.h>
//int main(){
//	char str[14];
//	int length = 0;
//	printf("Enter the string: ");
//	scanf("%[^\n]", str);
//	printf("%s \n",str);
//	
//	while(str[length] !='\0' ){
//		printf("%c \n",str[length]);
//		length++;
//	}
//	printf("%d",length);
//	return 0 ;
//}



//20. Swapping Two Numbers
//Write a program to swap two numbers without using a third variable.

//#include<stdio.h>
//int main(){
//   int a,b,temp;
//   printf("Enter two integers: ");
//   scanf("%d %d",&a,&b);
//   temp = a;
//   a=b;
//   b=temp;
//   printf("%d %d",a,b); 
//   return 0;	
//}



//21. ASCII Value of a Character
//Write a program to find and print the ASCII value of a character.

//#include<stdio.h>
//int main(){
//	char ref;
//	printf("Enter some character: ");
//	scanf("%c",&ref);
//	printf("%d",(int)ref);
//	return 0;
//}



//22. Convert Celsius to Fahrenheit
//Write a program to convert temperature from Celsius to Fahrenheit.

//#include<stdio.h>
//int main(){
//	float celc,fahr;
//	printf("Enter temperature: ");
//	scanf("%.2f",&celc);
//	fahr = (celc*9/5)+32;
//	printf("%.2f",fahr);
//	return 0;
//}



//23. Sum of First N Natural Numbers
//Write a program to calculate the sum of the first N natural numbers.

//#include<stdio.h>
//int main(){
//	int n,sum;
//	printf("Enter a number: ");
//	scanf("%d", &n);
//	sum=n*(n+1)/2;
//	printf("The sum of first n natural number is: %d",sum);
//	return 0;
//}



//24. Check Vowel or Consonant
//Write a program to check whether a given character is a vowel or consonant.

//#include<stdio.h>
//int main(){
//	char letter;
//	printf("Enter some character: ");
//	scanf("%c",&letter);
//	if(letter=='a' || letter=='e' || letter=='i' || letter=='o' || letter=='u'){
//		printf("Letter is vowel");
//	}else{
//		printf("Letter is consonant");
//	}
//	return 0;
//}



//25. Check Alphabet, Digit, or Special Character
//Write a program to check whether a character is an alphabet, digit, or special character.

//#include<stdio.h>
//int main(){
//	char ref;
//	printf("Enter some input: ");
//	scanf("%c",&ref);
//	if((ref>='a' && ref<='z') || (ref>='A' && ref<='Z')){
//		printf("Given input is alphabet");
//	}else if(ref>='0' && ref<='9'){
//		printf("Given input is a digit");
//	}else{
//		printf("Given input is a special character");
//	}
//	return 0;
//}



//26. Count the Number of Digits in an Integer
//Write a program to count the number of digits in a given integer.

//#include<stdio.h>
//int main(){
//	int num,count;
//	printf("Enter some integer: ");
//	scanf("%d",&num);
//	if(num==0){
//		count = 1;
//	}
//	while(num>0){
//		num= num/10;
//		count = count+1;
//	}
//	printf("%d",count);
//	return 0;
//}



//27. Check the Alphabetic Order of Two Strings
//Write a program to check whether two strings are in alphabetic order.

//#include<stdio.h>
//#include<string.h>
//int main(){
//	char str1[50],str2[50];
//	int i;
//	int count = 0;
//	printf("Enter two strings: ");
//	scanf("%s %s",&str1,&str2);
//    while((str1[i]<str1[i+1]) && (str2[i]<str2[i+1])){
//    	i++;
//    	count++;
//	}
//	if(count>0){
//		printf("yes they in alphabetical order");
//	}else{
//		printf("no they aren't in alphabetical order");
//	}
//	return 0;
//}



//28. Calculate the Power of a Number
//Write a program to calculate the power of a number using a loop.

//#include<stdio.h>
//int main(){
//	int i;
//	int num,pow,newNum=1;
//	printf("Enter the number and its power: ");
//	scanf("%d %d",&num,&pow);
//	for(i=1; i<=pow; i++){
//		newNum = newNum*num;
//	}
//	printf("%d^%d= %lld\n",num,pow,newNum);
//	return 0;
//}



//29. Check Armstrong Number
//Write a program to check whether a given number is an Armstrong number.

//30. Calculate the Average of Numbers in an Array
//Write a program to calculate the average of all the numbers in an array.

//#include<stdio.h>
//int main(){
//	int arr[] = {1,2,3,4,5,6,7,8,9};
//	int i,ave;
//	int sum=0;
//	int length = sizeof(arr)/sizeof(arr[0]);
//	for(i=0; i<=length; i++){
//		sum = sum+i;
//	}
//	ave = sum/length;
//	printf("The average of this array is: %d",ave);
//	return 0;
//}



//31. Find the Second Largest Number in an Array
//Write a program to find the second-largest number in an array.

//#include<stdio.h>
//int main(){
//	int arr[]= {1,3,2,5,4,6,8,9,10,7};
//	int i;
//	int max = arr[0];
//	int length = sizeof(arr)/sizeof(arr[0]);          ================================================================================
//	for(i=0; i<=length; i++){
//		if(arr[0]<arr[i]){
//			arr[i]= max;
//		}
//	}
//	secLargest = 
//}
//32. Check If a Number is a Perfect Square
//Write a program to check if a given number is a perfect square. A perfect square is an integer that is the square of an integer. For example, 9 is a perfect square since it equals 3² and can be written as 3 × 3.

//#include<stdio.h>
//#include<math.h>
//int main(){
//    int num;
//    printf("Enter a number");
//    scanf("%d",&num);
//    if(num<0){
//        printf("Negative numbers are not perfect squares.");
//    }
//    int sqrt_num = (int)sqrt(num);
//    if(sqrt_num*sqrt_num ==num){
//        printf("The number is a perfect square");
//    }else{
//        printf("Not a perfect square");
//    }
//    return 0;
//}

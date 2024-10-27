// Online C compiler to run C program online
// #include <stdio.h>

// int main() {
//     char character = '#';
//     printf("%c", character);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int num = 10;
//     printf("%d", num);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     float data = 10.9;
//     printf("%f", data);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     float data = 10.9;
//     char type = 'M';
//     printf("%f\n %c", data , type);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     char str[] = "abc";
//     printf("%s", str);

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
//
// int main() {
//     char str1[] = "a+";
//     char str2[] = "b";
//
//     strcat(str1,str2);
//     printf("%s",str1);
//
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int i;
//     for(i=1; i<=10; ++i){
//     printf("%d\n",i);
// }
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int i=1;
//     while(i<=20){
//     printf("%d\n", i);
//     i=i+2;
// }
//     return 0;
// }

//  #include <stdio.h>

//  int main() {
//      int age = 20;
//      if(age>18){
//     printf("above 18");
//  }else{
//      printf("under 18")
//     }

//      return 0;
// }

// #include <stdio.h>

// int main() {
//     int num = 2;
//     float data = 12.4;
//     printf("%f", num+data);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int num = 2;
//     float data = 12.4;
//     printf("%f", data-num);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int num = 2;
//     float data = 12.4;
//     printf("%f", num*data);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int num = 2;
//     float data = 12.4;
//     printf("%f", data/num);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int num = 2;
//     float data = 12.4;
//     printf("%d",102%51);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     printf("%f",10.2+10);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     printf("%f", 10*2.2);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     printf("%d",3%4);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     printf("%d",8/2);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     printf("%f", 8.2/2);

//     return 0;
//}

// #include <stdio.h>
// int main(){
//	int i;
//	for(i=0; i<=10; i++){
//		printf("%d\t", i);
//	}
// }

// #include <stdio.h>
// int main(){
//	int i;
//	(i=0);
//	while(i<=10){
//		printf("%d\t", i);
//		i++ ;
//	}
// }

// QUEST: Print even numbers from 1 to 11 using for and while loop.
// #include<stdio.h>
// int main(){
//	int i;
//	for(i=1; i<=11; i++){
//		if(i%2==0){
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i;
//	(i = 1);
//	while (i <= 11)
//	{
//		if (i % 2 == 0)
//		{
//			printf("%d\n", i);
//		}
//		i++;
//	}
//	return 0;
//}


//#include <stdio.h>
//int main(){
//	int arr[5]= {1,2,3,4,5};
//    int i;
//	for(i=0; i<=4; i++){
//	printf("%d", arr[i]);	
//	}
//	printf("%d",sizeof("3"));
//	return 0;
//}



//QUEST: Do the sum of all the elements of the array.
//#include<stdio.h>
//int main(){
//	int arr[7] = {4,3,2,1,7,8,6};
//    int length = sizeof(arr)/sizeof(arr[0]);
//	int sum =0;
//	int i;
//	for( i=0; i<length; i++){
//	sum = sum + arr[i];
//	
//	}
//		printf("%d",sum);
//	return 0;
//}



//to get a decimal value answer of "/" operator we write (float) infront of the operation.
//#include <stdio.h>
//
//int main() {
//    float a = (float)5/2;
//    printf("%.1f \n", a);
//    return 0;
//}



//MULTIDIMENTIONAL ARRAYS----------
//Syntax:-
//#include <stdio.h>
//
//int main() {
//  int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };
//  printf("%d", matrix[0][2]);
// 
//  return 0;
//}
//Here arr[i][j] i stands for number of rows and j stands for number of columns.



//To find the sum of 2-D array.
//#include <stdio.h>
//
//int main() {
//  int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };
//  int sum = 0;
//  int i, j;
//  for (i = 0; i < 2; i++) {
//    for (j = 0; j < 3; j++) {
//      sum = sum + matrix[i][j];
//    }
//  }
//  printf("%d\n", sum);
//  return 0;
//}



//RECURSION IN C --------------------------------------------
//Recursion is used to call a function by itself.It is used to break down complex problems to simple ones.
//EXAMPLE:-
//#include <stdio.h>
//int sum(int k);
//int main(){
//	int result = sum(11);
//	printf("The sum is: %d",result);
//	return 0;
//}
//int sum(int k){
//	if(k>0){
//		return k + sum(k-1);
//	}else{
//		return 0;
//	}
//}



//MATH FUNCTIONS--------------------------------------------------

//1.> ceil() function:-
//ceil() function rounds off the number upwards to the nearest integer.

//2.> floor() function:-
//floor() function rounds off the number downwards to the nearest integer.

//Ex:
//#include<stdio.h>
//#include<math.h>
//int main(){
//	printf("%f",ceil(1.45));
//  printf("%f",floor(1.45));
//	return 0;
//}



//STRUCTURES In c----------------------------------------------------
//Structures are a way to group several elements to one place.Each variable in a structure is called a member.
//EXAMPLE OF A STRUCTURE:-

//#include<stdio.h>
//struct myStruct{
//	int myNum;
//	int myLetter;
//};
//
//int main (){
//	struct myStruct s1;
//	s1.myNum = 30;
//	s1.myLetter = 'K';
//	printf("MyNumber is: %d\n", s1.myNum);
//	printf("MyLetter is: %c\n", s1.myLetter);
//	return 0;
//}


//EXAMPLE OF STRUCTURE IN ARRAY:-
//#include<stdio.h>
//#include<string.h>
//struct myStruct{
//	char myLetter;
//	int myNum;
//	char myString[20];
//};
//
//int main(){
//	struct myStruct s1;
//	strcpy(s1.myString,"Hello There!");
//	printf("%s",s1.myString);
//	return 0;
//}


//More simple syntax.
//#include<stdio.h>
//struct myStruct{
//	int myNum;
//	char myLetter;
//	char myStr[20];
//};
//
//int main(){
//	struct myStruct s1 = {34, 'K', "Some text"};
//	printf("%d %c %s", s1.myNum, s1.myLetter, s1.myStr);
//	return 0;
//}


//Modifyning values in structures.
//#include<stdio.h>
//#include<string.h>
//struct myStruct{
//	int myNum;
//	char myLetter;
//	char myStr[30];
//};
//int main(){
//	struct myStruct s1 ={30, 'K', "Hello There!"};
//	struct myStruct s2;
//	s2=s1;
//	s2.myNum = 40;
//	s2.myLetter = 'L';
//	strcpy(s2.myStr , "Some Text");
//	
//	printf("%d %c %s\n",s1.myNum, s1.myLetter, s1.myStr);
//    printf("%d %c %s\n",s2.myNum, s2.myLetter, s2.myStr);
//    return 0;
//}

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
#include<stdio.h>
int main(){
	int arr[7] = {4,3,2,1,7,8,6};
    int length = sizeof(arr)/sizeof(arr[0]);
	int sum =0;
	int i;
	for( i=0; i<length; i++){
	sum = sum + arr[i];
	
	}
		printf("%d",sum);
	return 0;
}



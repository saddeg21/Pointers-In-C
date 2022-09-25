# 2D ARRAY POINTER ARITHMETIC
## QUESTION
![dd](https://user-images.githubusercontent.com/89015461/192153240-3412375d-4672-4a37-81c4-1e6519c9f29e.png)

## SOLUTION
For understanding that question, we need to look at what it means if we use name of an array for 2D and 3D arrays. For 2D arrays, array name does not points to first element but it points to **FIRST 1D ARRAY**. For 3D arrays, array name points to **FIRST 2D ARRAY**. 

If we use __*__ operator with 2D array name, its value is address of first 1D arrays first element.

So in that question, we can observe that all 3 statements gives the same result, but WHY :
- __x+3__ means that 4th 1D array
- * (x+3) means that first elements address of 4th 1D array
- * (x+2) + 3 is kinda different. First go the 3rd 1D array and get the address of first element. Then add 3 arithmetically. But there are 3 elements in a 1D array so it points to address of first element of 4th 1D Array  
 
__The address of 2D array is equal to address of a first element of that 2D array.__

## 2D ARRAY ARITHMETIC
![kkk](https://user-images.githubusercontent.com/89015461/192153919-b167f5f1-70da-4df7-a6a1-d02118b7c986.png)

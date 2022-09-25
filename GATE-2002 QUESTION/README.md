# GATE 2002 QUESTION
## Question
![cx](https://user-images.githubusercontent.com/89015461/192152910-089ba115-bbc6-4355-9c04-682221e8ebbc.png)

## Solution
In C programming language , we use row major order for preserving an array in the memory. This means that memory location goes for every column and when it finishes, it goes to next row.

### Major Order
![indir](https://user-images.githubusercontent.com/89015461/192152979-08fee673-d46b-4328-ab1e-2982723371b6.png)

Because of that, we can calculate the Ram location of an element just like this:
   If the questioned position is arr[x][y] and array total size is arr[k][l], then: 
**&arr[0] + (x-1) times l + y**


# "12865"

made by Jaehyeok Choi

## Welcome to Jaehyeok's github!

## What is the problem?

![button](https://github.com/Choi-JaeHyeok-21500749/12865/blob/main/12865_pro.JPG)

## What Algorithm should I use?

dynamic programming

## What was the key point and the hard part?

We will start the possible cases from first item to last item.

For example, If we have input like below.

4 7

6 13

4 8

3 6

5 12

Let's assume that we only have first item. weight = 6 , value = 13

We cannot put in the bag if bag's capacity is less than 6. If our bag is bigger or same with 6.
The max value will be 13 and It does not matter if we have bigger bag. 

bag's capacity 1 2 3 4 5 6  7  8  9  10

max value      0 0 0 0 0 13 13 13 13 13

Now let's assume we have second item(4,8). In this time, bag which is bigger than capacity 4 will be 8. Taking more than 6 will be 13.

bag's capacity 1 2 3 4 5 6  7  8  9  10

max value      0 0 0 8 8 13 13 13 13 21

However , if we got third item(3,6) fill the bag with capacity 7's max value will be 14 not 13.
This means not taking some item should be compared with taking the item. 

Untill now we have max value in the array, taking n-th item or not taking n-th item when I have k capacity bag can be easily done by 

max value until we have new item  VS  max value until we have new item for bag's capacity is (bag's capacity - weight of n-th item) + n-th item's value

Explain it with the array will be like this.

bag's capacity 1 2 3 4 5 6   7   8  9  10

max value      0 0 0 8 8 13 *13* 13 13 21

bag's capacity 1 2 3 4 5 6  7 

max value      0 0 6 8 8 13 *13 VS (8+6)*

## Where can I get more help, if I need it?

You can contact me through email, which is 21500749@handong.edu.
Thank you for visiting this github!

